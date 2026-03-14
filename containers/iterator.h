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
    general_iterator(Container *pContainer = nullptr, Node *pNode = nullptr)
        : m_pContainer(pContainer), m_pNode(pNode) {}

    general_iterator(const myself &other) 
          : m_pContainer(other.m_pContainer), m_pNode(other.m_pNode){}

    general_iterator(myself &&other) // Move constructor
        : m_pContainer(std::move(other.m_pContainer)), 
          m_pNode(std::move(other.m_pNode)) {}
        //   {   m_pContainer = move(other.m_pContainer);
        //       m_pNode      = move(other.m_pNode);
        //   }

    IteratorBase &operator=(const myself &iter)
          {   m_pContainer = iter.m_pContainer;
              m_pNode      = iter.m_pNode;
              return static_cast<IteratorBase&>(*this);
          }

    bool operator==(const IteratorBase &iter) const  { return m_pNode == iter.m_pNode; }
    bool operator!=(const IteratorBase &iter) const  { return !(*this == iter);        }
    value_type &operator*() const { return m_pNode->getDataRef();   }
    value_type *operator->() const { return m_pNode->getDataPtr();   }
    virtual IteratorBase &operator++() = 0;
    virtual ~general_iterator() = default;
};

#endif
 