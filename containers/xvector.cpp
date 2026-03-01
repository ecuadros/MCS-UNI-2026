#include "xvector.h"
#include "../types.h"

void DemoVector() {
    XVector<T1> v;
    auto x = 20;
    v.PushBack(5);
    v.PushBack(2);
    v.PushBack(8);
    v[1] = 15;
    cout << v << endl;
    v.PushBack(10); 
    cout << v << "Otro texto: " << x << endl;

    XVector<T2> v2;
    v2.PushBack(3.5);
    v2.PushBack(2.5);
    v2.PushBack(1.5);
    cout << v2 << endl;

    XVector<T3> v3;
    v3.PushBack("Hola");
    v3.PushBack("MCS");
    v3.PushBack("UNI");
    v3.PushBack("2026");
    cout << v3 << endl;
}