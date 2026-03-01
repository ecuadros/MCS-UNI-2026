#ifndef __XVECTOR_H__
#define __XVECTOR_H__

#include <iostream>

using namespace std;

using T = int;

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

ostream &operator<<(ostream &os, XVector &v){
    auto size = v.Size();
    for (size_t i = 0; i < size; ++i)
        os << v[i] << " ";
    return os;
}

void DemoVector();

#endif // __XVECTOR_H__