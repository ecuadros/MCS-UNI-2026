#include "xvector.h"
#include "../types.h"
#include <fstream>

template <typename T> void Add(T &val) { val += 5; }

template <> void Add(T3 &val) { val += "-XYZ"; }

template <typename... Args> auto Sum(Args... args) { return (args + ...); }

template <typename T> void AddX1(T &val, ostream &os) { os << val << " "; }

template <typename T> void AddX2(T &val, T inc1, T inc2) { val += inc1 + inc2; }

void DemoVector() {
  XVector<VectorTraits<T1>> v1;
  auto x = 20;
  v1.PushBack(5);
  v1.PushBack(2);
  v1.PushBack(8);
  v1[1] = 15;
  cout << v1 << endl;
  v1.PushBack(10);
  v1.Foreach2(Add<T1>); // Add 5 to each element
  cout << "Add. : " << v1 << endl;
  v1.Foreach2(AddX1<T1>, cout);
  cout << endl; // Print each element

  cout << "AddX1: " << v1 << endl;
  v1.Foreach2(AddX2<T1>, 3, 5); // Add 3+5=8 to each element
  cout << "AddX2: " << v1 << endl;

  // v1.ForEach1(&Add);
  cout << v1 << "Otro texto: " << x << endl;

  XVector<VectorTraits<T2>> v2;
  v2.PushBack(3.5);
  v2.PushBack(2.5);
  v2.PushBack(1.5);
  // v2.ForEach1(&Add);
  v2.Foreach2(AddX1<T2>, cout);
  cout << v2 << endl;

  // v2.ForEach1([](T2 &val) { val += 10; });
  cout << v2 << endl;
  // TODO:
  // T2 extra = 20;
  // v2.ForEach1([extra](T2& val){ val += extra; });
  // cout << v2 << endl;

  XVector<VectorTraits<T3>> v3;
  v3.PushBack("Hola");
  v3.PushBack("MCS");
  v3.PushBack("UNI");
  v3.PushBack("2026");
  // v3.ForEach1(&Add);
  v3.Foreach2(AddX1<T3>, cout);
  cout << v3 << endl;

  ofstream of("Output.txt");
  of << v1 << endl;
  of << v2 << endl;
  of << v3 << endl;
  of.close();
}