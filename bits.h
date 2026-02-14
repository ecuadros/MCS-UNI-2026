#ifndef __BITS_H__
#define __BITS_H__
#include <bitset>
#include "types.h"

void DemoBits();

// 1. Bernaola Gayoso - César Raúl
void invertirPosPar(std::bitset<8>& b);

// 2. Cuadros-Vargas Ernesto

    // Enciende el n-esimo bit de x
    void turnon(UI &x, int n);
    // Apagar el n-esimo bit de x
    void turnoff(UI &x, int n);
    // Invertir el n-esimo bit de x
    void toggle(UI &x, int n);
    // Intercambiar el n-esimo bit de x, con el n-esimo bit de y
    void swapbits(UI &x, UI &y, int n);

// 3. Diaz Tapia Adderly
    //Permite encender o apagar un bit en la posición "n", para encender un bit v=1 para apagar v=0
    void setBitToValue(UI &x, int n, bool v);
// 4. Lopez Flores Royer Amed
UI lowBitMask(int n);
UI crossoverGenetic(UI &child1, UI &child2,int k);
// 5. López Sandoval, Heiner

    // Invertir los bits de un numero
    UI invertirBits(UI &x, UI CantidadBits) ;


// 6. Mallaupoma Cesar

// 7. Miranda Zarate Jorge Luis

// 8. Riveros Guevara

// 9. Segovia Giancarlo
void reversebits(UI &x);

// 10. Suarez Maciel Susana Isabel.
    // Cuenta la cantidad de bits en 1 en x (popcount)
    int countOnes(UI x);

// 11. Tellez Jhon
    // Enciende  2 bit del centro de 5 bit
    void turnon(UI &x, UI &y, int n, int m);
// 12. Valcarcel Julian

// 13. Vilca Aguilar Luis
 //Enciende todos los bits desde el bit 0 hasta el bit n
    void setLowerBits(UI &x, int n);

// 14. Vinatea Chávez Camilo Jorge 
    // Intercambiar el n-esimo bit de x, con el m-esimo bit de x
    void movebit(UI &x, int n, int m);
   

// 14. Vinatea Chávez Camilo Jorge  

#endif // __BITS_H__