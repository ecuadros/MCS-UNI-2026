#ifndef __VITERATOR_H__
#define __VITERATOR_H__

#include "iterator.h"

template <typename Traits>
class XVector;

template <typename Traits>
class vIterator : 
    public general_iterator<XVector<Traits>, vIterator<Traits>> 
{
public:
    
    using Container = XVector<Traits>;
    using Base = general_iterator<Container, vIterator<Traits>>;
    using Node = typename Container::Node;

    vIterator(Container *pContainer, Node *pNode)
                                : Base(pContainer, pNode) {}

    virtual vIterator &operator++() override {
        this->m_pNode->data++; // Se mueve al siguiente elemento del vector
        return *this;
    }
};

#endif // __VITERATOR_H__