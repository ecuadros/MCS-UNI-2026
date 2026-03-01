#ifndef __XVECTOR_H__
#define __XVECTOR_H__

#include <iostream>

using namespace std;

template <typename T>
class XVector {
private:
    T     *m_data;
    size_t m_size;
    size_t m_capacity;

public:
    XVector() : m_data(nullptr), m_size(0), m_capacity(0) {}
    virtual ~XVector() { delete[] m_data; }

    void PushBack(const T &value);
    T &operator[](size_t index);
    size_t Size() const { return m_size; }
};

template <typename T>
void XVector<T>::PushBack(const T &value) {
    if (m_size == m_capacity) {
      size_t newCapacity = (m_capacity == 0) ? 1 : m_capacity * 2;
      T *newData = new T[newCapacity];
      for (size_t i = 0; i < m_size; ++i) {
        newData[i] = m_data[i];
      }
      delete[] m_data;
      m_data = newData;
      m_capacity = newCapacity;
    }
    m_data[m_size++] = value;
}

template <typename T>
T &XVector<T>::operator[](size_t index) {
    if (index >= m_size) {
      throw out_of_range("Index out of range");
    }
    return m_data[index];
}

template <typename T>
ostream &operator<<(ostream &os, XVector<T> &v){
    auto size = v.Size();
    for (size_t i = 0; i < size; ++i)
        os << v[i] << " ";
    return os;
}

void DemoVector();

#endif // __XVECTOR_H__