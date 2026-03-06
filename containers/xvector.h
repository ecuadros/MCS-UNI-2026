#ifndef __XVECTOR_H__
#define __XVECTOR_H__

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <typename T>
struct VectorTraits {
    using value_type = T;
};

template <typename Traits>
class XVector {
    using value_type = typename Traits::value_type;

private:
    value_type     *m_data;
    size_t          m_size;
    size_t          m_capacity;

public:
    XVector() : m_data(nullptr), m_size(0), m_capacity(0) {}
    virtual ~XVector() { delete[] m_data; }

    void PushBack(const value_type &value);
    value_type &operator[](size_t index);
    size_t Size() const { return m_size; }
    string toString() const;
    string GetClassName() const { return string("XVector"); };
};

template <typename Traits>
void XVector<Traits>::PushBack(const value_type &value) {
    if (m_size == m_capacity) {
      size_t newCapacity = (m_capacity == 0) ? 1 : m_capacity * 2;
      value_type *newData = new value_type[newCapacity];
      for (size_t i = 0; i < m_size; ++i) {
        newData[i] = m_data[i];
      }
      delete[] m_data;
      m_data = newData;
      m_capacity = newCapacity;
    }
    m_data[m_size++] = value;
}

template <typename Traits>
typename Traits::value_type &XVector<Traits>::operator[](size_t index) {
    if (index >= m_size) {
      throw out_of_range("Index out of range");
    }
    return m_data[index];
}

template <typename Traits>
string XVector<Traits>::toString() const {
    stringstream ss;
    auto size = Size();
    ss << GetClassName() << ":[";
    for (size_t i = 0; i < size - 1; ++i)
        ss << m_data[i] << " ";
    if (size > 0)
        ss << m_data[size - 1];
    ss << "]";
    return ss.str();
}

template <typename Traits>
ostream &operator<<(ostream &os, XVector<Traits> &v){
    return os << v.toString();
}

// FIXME: No se implemento correctamente
// Operador para leer un XVector desde un stream
template <typename Traits>
istream &operator>>(istream &is, XVector<Traits> &v){
    // value_type value;
    // while (is >> value) {
    //     v.PushBack(value);
    // }
    return is;
}

void DemoVector();

#endif // __XVECTOR_H__