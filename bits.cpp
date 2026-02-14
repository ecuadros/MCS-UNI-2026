#include <iostream>
#include <bitset>
#include "bits.h"

using namespace std;

// 1. Bernaola Gayoso - César Raúl
void invertirPosicionPar(std::bitset<8>& b){
    for(size_t i = 0; i < b.size(); i += 2) 
        b.flip(i);
}

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
void setBitToValue(UI &x, int n, bool v) {
    x = (x & ~(1 << n)) | (v << n);
}
// 4. Lopez Flores Royer Amed

// 5. López Sandoval, Heiner
// Invertit los bits de x, indicando con cuantos bits se trabaja
UI invertirBits(UI &x, UI CantidadBits) {
    UI resultado = 0;
    for (UI i = 0; i < CantidadBits; i++) {
        // Extraer el bit i de num
        UI bit = (x >> i) & 1;
        // Colocar ese bit en la posición invertida
        resultado |= (bit << (CantidadBits - 1 - i));
    }
    return resultado;
}


// 6. Mallaupoma Cesar

// 7. Miranda Zarate Jorge Luis

// 8. Riveros Guevara

// 9. Segovia Giancarlo
// Revertir todos los bits de x
void reversebits(UI &x) {
    UI res = 0;
    for(int i = 0; i < 32; i++) {
        res <<= 1;
        res |= (x & 1);
        x >>= 1;
    }
    x = res;
}

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
// Enciende 2 bit del centro de 5 bits (bit 2)
void turnon(UI &x, UI &y, int n,int m){
    n=2; // El bit del centro de 5 bits es el bit 2 (0, 1, 2, 3, 4)
    n=3; // El bit del centro de 5 bits es el bit 2 (0, 1, 2, 3, 4)
    x |= (1 << n); // Enciende el bit n
    y |= (1 << m); // Enciende el bit m
}
// 12. Valcarcel Julian

// 13. Vilca Aguilar Luis
//Enciende todos los bits desde el bit 0 hasta el bit n
void setLowerBits(UI &x, int n){
    UI mask = (1 << (n + 1)) - 1;  // Crear máscara
    x |= mask;                    // Encender bits
}

// 14. Vinatea Chávez Camilo Jorge
void movebit(UI &x, int n, int m){
    // Extraer el bit n, verifica si el n-esimo bit de x está encendido
    UI bit = (x >> n) & 1;
    // Apagar el bit n en x, mostrar si el n-esimo bit de x está encendido o apagado
    x &= ~(1 << n);
    // Colocar el bit extraído en la posición m
    if(bit){
        x |= (1 << m);
    }
}



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
    cout << "X después de sumar 5 y desplazar a la izquierda 2: " << x << endl;
    x |= 0b00001111; // x = x | 0b00001111;
    cout << "X después de hacer OR con 0b00001111: " << x << endl";
    x ^= 0b11110000; // x = x ^ 0b11110000;

    // 1. Bernaola Gayoso - César Raúl
    bitset<8> b(36);
    cout << "Original : " << b << endl;
    invertirPosicionPar(b);
    cout << "invertirPosicionPar Resultado: " << b << endl;

    // 2. Cuadros-Vargas Ernesto

    // 3. Diaz Tapia Adderly
    void setBitToValue(x, 3, 1)
    cout << "X después de encender el bit 3: "<< x <<endl;
    cout << "X en binario: " << bitset<8>(x) << endl;
    // 4. Lopez Flores Royer Amed

    // 5. López Sandoval, Heiner
    x = 13 ;
    cout << "Antes de invertir los bits:" << bitset<8>(x) << endl ;
    x = invertirBits(x,8) ;
    cout << "Despues de invertir los bits:" << bitset<8>(x) << endl ;

    // 6. Mallaupoma Cesar

    // 7. Miranda Zarate Jorge Luis

    // 8. Riveros Guevara

    // 9. Segovia Giancarlo
    x = 0b11001000;
    cout << "X antes de hacer reverse: " << bitset<32>(x) << endl;
    reversebits(x);
    cout << "X después de hacer reverse: " << bitset<32>(x) << endl;

    // 10. Suarez Maciel Susana Isabel
    
    UI a = 0b10110100;
    cout << "a en binario: " << bitset<8>(a) << endl;
    cout << "Cantidad de bits en 1: " << countOnes(a) << "\n\n";

    // 11. Tellez Jhon

    // 12. Valcarcel Julian

    // 13. Vilca Aguilar Luis
    
    cout << endl;
    cout << "Demostracion de encendido de bits desde el bit 0 hasta el bit n:" << endl;
    x = 32;

    cout << "X antes de encender los bits desde el 0 hasta el 3: " << bitset<8>(x) << endl;
    setLowerBits(x, 3); // Enciende todos los bits desde el bit 0 hasta el bit 3 de x
    cout << "X después de encender los bits desde el 0 hasta el 3: " << bitset<8>(x) << endl;
    cout << "X en decimal: " << dec << x << endl;
    cout << "X en binario: " << bitset<8>(x) << endl;

    // 14. Vinatea Chávez Camilo Jorge  
    x = 0b10010;
    cout << endl << "Demo Camilo Vinatea - Intercambiar el bit m por el bit n" << endl << endl;
    cout << "X (en decimal) antes de cambiar el bit 4 por el bit 0: " << x << endl;
    cout << "X (en binario) antes de cambiar el bit 4 por el bit 0: " << bitset<5>(x) << endl;
    movebit(x, 4, 0);
    cout << "X (en decimal) despues de cambiar el bit 4 por el bit 0: " << x << endl;
    cout << "X (en binario) despues de cambiar el bit 4 por el bit 0: " << bitset<5>(x) << endl;

    x = 0b10100;
    cout << endl << "X (en decimal) antes de cambiar el bit 3 por el bit 0: " << x << endl;
    cout << "X (en binario) antes de cambiar el bit 3 por el bit 0: " << bitset<5>(x) << endl;
    movebit(x, 3, 0);
    cout << "X (en decimal) despues de cambiar el bit 3 por el bit 0: " << x << endl;
    cout << "X (en binario) despues de cambiar el bit 3 por el bit 0: " << bitset<5>(x) << endl;
}