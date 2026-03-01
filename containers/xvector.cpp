#include "xvector.h"

void XVector::PushBack(const T &value) {
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

T &XVector::operator[](size_t index) {
    if (index >= m_size) {
      throw out_of_range("Index out of range");
    }
    return m_data[index];
}

void DemoVector() {
    XVector v;
    int x = 20;
    v.PushBack(5);
    v.PushBack(2);
    v.PushBack(8);
    v[1] = 15;
    cout << v << endl;
    v.PushBack(10); 
    cout << v << "Otro texto: " << x << endl;
}