#include "xvector.h"
#include "../types.h"
#include <fstream>

template <typename T> void Add(T &val) { val += 5; }

template <> void Add(T3 &val) { val += "-XYZ"; }

template <typename... Args>
auto Sum(Args... args){
    return (args + ...);
}

template <typename T, typename... Args>
void AddX(T &val, Args... args){
    val += Sum(args...);
}

void DemoVector() {
  XVector<VectorTraits<T1>> v1;
  auto x = 20;
  v1.PushBack(5);
  v1.PushBack(2);
  v1.PushBack(8);
  v1[1] = 15;
  cout << v1 << endl;
  v1.PushBack(10);
  //   v1.ForEach(&::AddX, 10, 30, 50, 20, 10, 5);
  cout << v1 << endl;
//   v1.ForEach(&::AddX, -10, -300);

  v1.ForEachOld(&Add);
  cout << v1 << "Otro texto: " << x << endl;

  XVector<VectorTraits<T2> > v2;
  v2.PushBack(3.5);
  v2.PushBack(2.5);
  v2.PushBack(1.5);
  v2.ForEachOld(&Add);
  cout << v2 << endl;

  v2.ForEachOld([](T2 &val) { val += 10; });
  cout << v2 << endl;
  // TODO:
  // T2 extra = 20;
  // v2.ForEachOld([extra](T2& val){ val += extra; });
  // cout << v2 << endl;

  XVector<VectorTraits<T3>> v3;
  v3.PushBack("Hola");
  v3.PushBack("MCS");
  v3.PushBack("UNI");
  v3.PushBack("2026");
  v3.ForEachOld(&Add);
  cout << v3 << endl;

  ofstream of("Output.txt");
  of << v1 << endl;
  of << v2 << endl;
  of << v3 << endl;
  of.close();
}