#ifndef __ITERATOR_H__
#define __ITERATOR_H__
#include <algorithm>
#include <utility>

template <typename Container, class IteratorBase> // 
class general_iterator
{public:
    typedef typename Container::Node    Node;
    typedef typename Node::value_type   value_type;
    //typedef class general_iterator<Container> Parent;
    typedef general_iterator<Container, IteratorBase> myself; // 
    
protected:
    Container *m_pContainer;    
    Node      *m_pNode;
public:
    general_iterator(Container *pContainer, Node *pNode)
        : m_pContainer(pContainer), m_pNode(pNode) {}
    general_iterator(myself &other) 
          : m_pContainer(other.m_pContainer), m_pNode(other.m_pNode){}
    general_iterator(myself &&other) // Move constructor
          {   m_pContainer = move(other.m_pContainer);
              m_pNode      = move(other.m_pNode);
          }
    IteratorBase operator=(IteratorBase &iter)
          {   m_pContainer = move(iter.m_pContainer);
              m_pNode      = move(iter.m_pNode);
              return *(IteratorBase *)this; // Pending static_cast?
          }

    bool operator==(IteratorBase iter)   { return m_pNode == iter.m_pNode; }
    bool operator!=(IteratorBase iter)   { return !(*this == iter);        }
    value_type &operator*()              { return m_pNode->getDataRef();   }
    value_type *operator->()             { return m_pNode->getDataPtr();   }
    
    // Pre-incremento (++it) - Debe ser implementado por la clase hija
    virtual IteratorBase &operator++()    = 0;

    // Post-incremento (it++) - Provisto genéricamente para todas las clases hijas
    IteratorBase operator++(int) {
        IteratorBase temp = *static_cast<IteratorBase*>(this);
        ++(*this); // Llama al pre-incremento de la clase hija
        return temp;
    }
};

#endif
 