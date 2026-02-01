#include <iostream>
#include "util.h"


int main() {
    // 1. Código original de la clase (Ernesto)
    // -------------------------------------------------
    std::cout << "--- EJEMPLO CLASE (INTERCAMBIAR) ---" << std::endl;
    int x = 20;
    int y = 45;
    
    std::cout << "Antes: x = " << x << ", y = " << y << std::endl;
    intercambiar(x, y);
    std::cout << "Despues: x = " << x << ", y = " << y << std::endl;
    std::cout << std::endl;

 
    std::cout << "--- TAREA ALUMNO 12 (REDONDEAR) ---" << std::endl;
    
    // Declaramos 
    double valor1 = 4.6;
    double valor2 = 4.2;

    // Llama eimprimimos
    std::cout << "Redondeando " << valor1 << " -> " << redondear(valor1) << std::endl;
    std::cout << "Redondeando " << valor2 << " -> " << redondear(valor2) << std::endl;

    return 0;
}
