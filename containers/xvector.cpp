#include <fstream>
#include "xvector.h"
#include "../types.h"

template<typename T>
void Add(T& val) { val += 5;  }

template<>
void Add(T3& val) { val += "-XYZ";  }

void DemoVector() {
    XVector< VectorTraits<T1> > v1;
    auto x = 20;
    v1.PushBack(5);
    v1.PushBack(2);
    v1.PushBack(8);
    v1[1] = 15;
    cout << v1 << endl;
    v1.PushBack(10); 
    v1.ForEach(&Add);
    cout << v1 << "Otro texto: " << x << endl;

    XVector< VectorTraits<T2> > v2;
    v2.PushBack(3.5);
    v2.PushBack(2.5);
    v2.PushBack(1.5);
    v2.ForEach(&Add);
    cout << v2 << endl;

    XVector< VectorTraits<T3> > v3;
    v3.PushBack("Hola");
    v3.PushBack("MCS"); 
    v3.PushBack("UNI");
    v3.PushBack("2026");
    v3.ForEach(&Add);
    cout << v3 << endl;

    ofstream of("Output.txt");
    of << v1 << endl;
    of << v2 << endl;
    of << v3 << endl;
    of.close();

}