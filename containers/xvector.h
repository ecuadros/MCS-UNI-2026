#ifndef __XVECTOR_H__
#define __XVECTOR_H__

#include <iostream>
#include <mutex>
#include <sstream>
#include <string>
#include "iterator.h"

using namespace std;

template <typename T> struct VectorTraits { using value_type = T; };

template <typename Traits> class XVector {

public:
  using value_type = typename Traits::value_type;

  //NODO
  struct Node {
    using value_type = typename Traits::value_type;
    value_type data;

    Node() = default;
    Node(const value_type &val) : data(val) {}

    value_type &getDataRef() { return data; }
    value_type *getDataPtr() { return &data; }
  };

//ITERATOR
class iterator : public general_iterator<XVector<Traits>, iterator> {
  using base = general_iterator<XVector<Traits>, iterator>;
public:
  iterator(XVector<Traits> *pContainer = nullptr, Node *pNode = nullptr)
      : base(pContainer, pNode) {}

  iterator &operator++() override{
    ++this->m_pNode;
    return *this;
  }

  iterator operator++(int) {
    iterator temp = *this;
    ++(*this);
    return temp;
  }
};

private:
  Node *m_data;
  size_t m_size;
  size_t m_capacity;

  mutex mtx;

public:
  XVector() : m_data(nullptr), m_size(0), m_capacity(0) {}
  virtual ~XVector() { delete[] m_data; }

  void PushBack(const value_type &value);
  void Resize();
  value_type &operator[](size_t index);
  size_t Size() const { return m_size; }
  string toString() const;
  string GetClassName() const { return string("XVector"); };

  //ADD: Iterators
  iterator Begin() { return iterator(this, m_data); }
  iterator End() { return iterator(this, m_data + m_size); }

  template <typename Func, typename... Args>
  void Foreach2(Func func, Args&& ... args){
    for (size_t i = 0; i < m_size; ++i){
      func(m_data[i].data, std::forward<Args>(args)...);
    }
  }
  void ForEach1(void (*func)(value_type &)); // Old style
};

template <typename Traits>
void XVector<Traits>::ForEach1(void (*func)(value_type &)) {
  for (size_t i = 0; i < m_size; ++i){
    func(m_data[i]);
  }
}

// Resize the vector when capacity is reached
template <typename Traits> void XVector<Traits>::Resize() {
  scoped_lock lock(mtx);
  size_t newCapacity = (m_capacity == 0) ? 1 : m_capacity * 2;
  Node *newData = new Node[newCapacity];
  for (size_t i = 0; i < m_size; ++i) {
    newData[i] = m_data[i];
  }
  delete[] m_data;
  m_data = newData;
  m_capacity = newCapacity;
}

template <typename Traits>
void XVector<Traits>::PushBack(const value_type &value) {
  if (m_size == m_capacity)
    Resize();
  scoped_lock lock(mtx);
  m_data[m_size++] = value;
}

template <typename Traits>
typename Traits::value_type &XVector<Traits>::operator[](size_t index) {
  if (index >= m_size) {
    throw out_of_range("Index out of range");
  }
  return m_data[index].data;
}

template <typename Traits> string XVector<Traits>::toString() const {
  stringstream ss;
  // auto size = Size();
  ss << GetClassName() << ":[";
  for (size_t i = 0; i < m_size; ++i){
    ss << m_data[i].data;
    if (i + 1 < m_size) ss << " ";
    ss << m_data[m_size - 1].data;
  }
  ss << "]";
  return ss.str();
}

template <typename Traits>
ostream &operator<<(ostream &os, const XVector<Traits> &v) {
  return os << v.toString();
}

// FIXME: No se implemento correctamente
// Operador para leer un XVector desde un stream
template <typename Traits>
istream &operator>>(istream &is, XVector<Traits> &v) {
  // value_type value;
  // while (is >> value) {
  //     v.PushBack(value);
  // }
  return is;
}

void DemoVector();

#endif // __XVECTOR_H__