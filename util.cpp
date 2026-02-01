#include <iostream>
#include "util.h"

// Implementación de la función de la clase (Ernesto)
void intercambiar(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

// ---------------------------------------------------------
// TAREA ALUMNO 12 (Julián): Redondear (Versión simple)
// ---------------------------------------------------------
int redondear(double numero) {
    return (int)(numero + 0.5);
}
