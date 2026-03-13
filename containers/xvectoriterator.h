#ifndef __XVECTOR_ITERATOR_H__
#define __XVECTOR_ITERATOR_H__

#include "iterator.h"
#include "xvector.h"

// 1. El "Nodo Falso": XVectorNode simula ser un "Nodo" pero en realidad hace un cast al puntero de los datos.
// Esto es necesario para no modificar XVector; general_iterator requiere obligatoriamente un Container::Node.
template <typename T>
struct XVectorNode {
    using value_type = T;
    
    value_type& getDataRef() { 
        return *reinterpret_cast<value_type*>(this); 
    }
    
    value_type* getDataPtr() { 
        return reinterpret_cast<value_type*>(this); 
    }
};


template <typename Traits>
struct XVectorProxyContainer {
    using Node = XVectorNode<typename Traits::value_type>;
};


template <typename Traits>
class xvector_iterator : public general_iterator<XVectorProxyContainer<Traits>, xvector_iterator<Traits>> {
public:
    using Parent = general_iterator<XVectorProxyContainer<Traits>, xvector_iterator<Traits>>;
    using Node = typename Parent::Node;
    using value_type = typename Traits::value_type;

private:
    value_type* m_real_ptr; 

public:
   
    xvector_iterator(XVectorProxyContainer<Traits>* pContainer, value_type* ptr)
        : Parent(pContainer, reinterpret_cast<Node*>(ptr)), m_real_ptr(ptr) {}

   
    xvector_iterator(const xvector_iterator& other) 
        : Parent(const_cast<xvector_iterator&>(other)), m_real_ptr(other.m_real_ptr) {}

    
    xvector_iterator& operator=(xvector_iterator iter) {
        Parent::operator=(iter);
        m_real_ptr = iter.m_real_ptr;
        return *this;
    }

    xvector_iterator& operator++() override {
        if (m_real_ptr != nullptr) {
            m_real_ptr++; // Memoria continua, solo avanzamos el puntero
            this->m_pNode = reinterpret_cast<Node*>(m_real_ptr);
        }
        return *this;
    }
    
    static xvector_iterator begin(XVector<Traits>& vec) {
        if (vec.Size() == 0) {
            return xvector_iterator(nullptr, nullptr);
        }
        
        return xvector_iterator(nullptr, &vec[0]);
    }

    static xvector_iterator end(XVector<Traits>& vec) {
        if (vec.Size() == 0) {
            return xvector_iterator(nullptr, nullptr);
        }
        
        return xvector_iterator(nullptr, &vec[0] + vec.Size());
    }
};


//template <typename Traits>
//auto begin(XVector<Traits>& vec) {
//    return xvector_iterator<Traits>::begin(vec);
//}

//template <typename Traits>
//auto end(XVector<Traits>& vec) {
//    return xvector_iterator<Traits>::end(vec);
//}
void DemoXVectorIterator();
#endif // __XVECTOR_ITERATOR_H__