#include <iostream>
#include <bitset>
#include "bits.h"

using namespace std;

// 1. Bernaola Gayoso - César Raúl

// 2. Cuadros-Vargas Ernesto
// Enciende el n-esimo bit de x
void turnon(UI &x, int n){
    x |= (1 << n); // Enciende el bit n
}

// Apagar el n-esimo bit de x
void turnoff(UI &x, int n){
    x &= ~(1 << n); // Apaga el bit n
}

// Invertir el n-esimo bit de x
void toggle(UI &x, int n){
    x ^= (1 << n); // Invierte el bit n
}

// Intercambiar el n-esimo bit de x, con el n-esimo bit de y
void swapbits(UI &x, UI &y, int n){
    UI bit = (1 << n); // Crea una máscara para el bit n
    if((x & bit) != (y & bit)){ // Si los bits son diferentes, intercambiarlos
        x ^= (1 << n); // Cambia el bit n de x
        y ^= (1 << n); // Cambia el bit n de y
    }
}

// 3. Diaz Tapia Adderly

// 4. Lopez Flores Royer Amed

// 5. López Sandoval, Heiner

// 6. Mallaupoma Cesar

// 7. Miranda Zarate Jorge Luis

// 8. Riveros Guevara

// 9. Segovia Giancarlo

// 10. Suarez Maciel Susana Isabel.
    // Cuenta la cantidad de bits en 1 (popcount) usando Brian Kernighan
    int countOnes(UI x){
        int count = 0;
        while (x != 0){
            x &= (x - 1); // elimina el bit 1 menos significativo
            count++;
        }
        return count;
    }

// 11. Tellez Jhon

// 12. Valcarcel Julian

// 13. Vilca Aguilar Luis

// 14. Vinatea Chávez Camilo Jorge  



void DemoBits(){
    UI x = 5, y = 11, z;
    
    cout << "X en binario: " << bitset<4>(x) << endl;
    cout << "Y en binario: " << bitset<4>(y) << endl;

    z = x & y; // AND bit a bit
    cout << "AND: " << z << endl; // Imprime el resultado de la operación AND
    z = x | y; // OR bit a bit
    cout << "OR: " << z << endl; // Imprime el resultado de la
    z = x ^ y; // XOR bit a bit
    cout << "XOR: " << z << endl; // Imprime el resultado de
    z = ~x; // NOT bit a bit
    cout << "NOT: " << z << endl; // Imprime el resultado de la
    z = x << 2  ; // Desplazamiento a la izquierda
    cout << "Desplazamiento a la izquierda: " << z << endl; //
    z = y >> 1; // Desplazamiento a la derecha
    cout << "Desplazamiento a la derecha: " << z << endl; //

    x = 0b1010; // Representación binaria de 10
    cout << "X: " << x << endl; // Imprime el valor de x en decimal
    cout << "X en binario: " << bitset<4>(x) << endl; // Imprime el valor de x en binario usando bitset
    x = 0xAF; // Representación hexadecimal de 175
    cout << "X :" << x << endl; // Imprime el valor de x en decimal
    cout << "X en hexadecimal: " << hex << x << endl; // Imprime

    x = 0b1000; // Representación binaria de 10
    turnon(x, 0); // Enciende el bit 0 de x
    cout << "X después de encender el bit 0: " << x << endl;
    cout << "X en binario: " << bitset<8>(x) << endl;

    turnon(x, 5); // Enciende el bit 0 de x
    cout << "X después de encender el bit 5: " << x << endl;
    cout << "X en binario: " << bitset<8>(x) << endl;

    x = x + 5; // x += 5;
    x <<= 2; // x = x << 2;
    cout << "X después de sumar 5 y desplazar a la izquierda 2:
    x |= 0b00001111; // x = x | 0b00001111;
    cout << "X después de hacer OR con 0b00001111: " << x << endl";
    x ^= 0b11110000; // x = x ^ 0b11110000;

    // 1. Bernaola Gayoso - César Raúl

    // 2. Cuadros-Vargas Ernesto

    // 3. Diaz Tapia Adderly

    // 4. Lopez Flores Royer Amed

    // 5. López Sandoval, Heiner

    // 6. Mallaupoma Cesar

    // 7. Miranda Zarate Jorge Luis

    // 8. Riveros Guevara

    // 9. Segovia Giancarlo

    // 10. Suarez Maciel Susana Isabel
    
    UI a = 0b10110100;
    cout << "a en binario: " << bitset<8>(a) << endl;
    cout << "Cantidad de bits en 1: " << countOnes(a) << "\n\n";

    // 11. Tellez Jhon

    // 12. Valcarcel Julian

    // 13. Vilca Aguilar Luis

    // 14. Vinatea Chávez Camilo Jorge  

}