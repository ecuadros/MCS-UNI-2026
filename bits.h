#ifndef __BITS_H__
#define __BITS_H__
#include "types.h"

void DemoBits();

// 1. Bernaola Gayoso - César Raúl

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

// 4. Lopez Flores Royer Amed

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

// 12. Valcarcel Julian

// 13. Vilca Aguilar Luis

// 14. Vinatea Chávez Camilo Jorge

#endif // __BITS_H__