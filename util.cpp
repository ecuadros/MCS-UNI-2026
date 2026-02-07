#include <iostream>
#include <cmath>
#include <cstdlib>
#include "util.h"
#include "util.h"


// 1. Bernaola Gayoso - César Raúl
// Implementacion especializada de adicion para IntParam
template <>
IntParam addition(IntParam a, IntParam b){
    return a + b + 1;
}

// 2. Cuadros-Vargas Ernesto
// Los template se implementan en el .h, no en el .cpp

// 3. Diaz Tapia Adderly
//Implementado en .h

// 4. Lopez Flores Royer Amed
//MultParam multiplicar(MultParam &a, MultParam &b){
//    return a * b;
//}
// 5. López Sandoval, Heiner

// 6. Mallaupoma Cesar
//

// 7. Miranda Zarate Jorge Luis
// Los template se implementan en el .h, no en el .cpp

// 8. Riveros Guevara



// 9. Segovia Giancarlo
/*
int fibonacci(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
*/

// 10. Suarez Maciel Susana Isabel
//Implementado en .h

// 11. Tellez Jhon


// 12. Valcarcel Julian


// 13. Vilca Aguilar Luis

// 14. Vinatea Chávez Camilo Jorge

void DemoInicial(){
    //int x = 20; // , y = 45;
    //float f1, f2; //, f3;

// 1. Bernaola Gayoso - César Raúl
    DemoInicialBernaolaGayosoCesar();

// 2. Cuadros-Vargas Ernesto
    DemoInicialCuadrosVargas();

// 3. Diaz Tapia Adderly
// substraction
    DemoInicialDiazTapia();

// 4. Lopez Flores Royer Amed
// multiplication
    DemoInicialLopezFloresRoyerAmed();
// 5. López Sandoval, Heiner
// division
    std::cout << "Demo Lopez Sandoval Heiner" << std::endl;
    T5 f11 = 20, f21 = 4 ;
    std::cout << f11 << " / " << f21 << " = " << division(f11,f21) << "\n" ;
    T5 f12 = 2, f22 = 3 ;
    std::cout << f12 << " / " << f22 << " = " << division(f12,f22) << "\n" ;
// 6. Mallaupoma Cesar
// genera un numero aleatorio
   DemoInicialCesarMallaupoma();

// 7. Miranda Zarate Jorge Luis
    DemoInicialMirandaZarate();

// 8. Riveros Guevara
// IsPrime
    DemoInicialRiverosGuevara();

// 9. Segovia Giancarlo
// fibonacci
    DemoInicialSegoviaGiancarlo();

// 10. Suarez Maciel Susana Isabel
// average()
    DemoInicialSusana();

// 11. Tellez Jhon
// sumar 10 numeros naturales
    {
    std::cout << "Demo Jhon Tellez Heredia" << std::endl;

    // TODO: no ingresar valores
    int x = 10;
    // TODO: verificar la comparacion
    // TODO: cambiar a ++i
    // TODO: como solo es 1 instruccion, no necesitas {}
    // TODO: suma += i;
    std::cout<<"Ingrese el numero 10: ";

    int resultado = SumaPrimero10(x);
    std::cout<<"suma: "<<resultado<<std::endl;
    }

// 12. Valcarcel Julian

// 13. Vilca Aguilar Luis
// root
    DemoInicialVilcaAguilar();
    
// 14. Vinatea Chávez Camilo Jorge
    DemoInicialCamiloVinatea();
    
}

// 1. Bernaola Gayoso - César Raúl
void DemoInicialBernaolaGayosoCesar() {
    std::cout << "Demo Bernaola Gayoso Cesar" << std::endl;
    IntParam p1 = 10, p2 = 30;
    IntParam p3 = addition(p1, p2);
    std::cout << "la suma de x=" << p1 << " y=" << p2 << " es: " << p3 << "\n\n";

    T2 q1 = 5.5, q2 = 10.2;
    T2 q3 = addition(q1, q2);
    std::cout << "la suma de x=" << q1 << " y=" << q2 << " es: " << q3 << "\n\n";
}

// 2. Cuadros-Vargas Ernesto
void DemoInicialCuadrosVargas(){
    std::cout << "Demo Cuadros-Vargas Ernesto" << std::endl;

    T1 E1 = 20, E2 = 45;
    intercambiar(E1, E2);
    std::cout << "x=" << E1 << " y=" << E2 << "\n\n";

    T2 a = 5.5, b = 10.2;
    intercambiar(a, b);
    std::cout << "a=" << a << " b=" << b << "\n";

    std::string str1 = "MCS", str2 = "UNI";
    intercambiar(str1, str2);
    std::cout << "str1=" << str1 << " str2=" << str2 << "\n";
}



// 3. Diaz Tapia Adderly
void DemoInicialDiazTapia(){
    std::cout << "Demo Adderly Díaz Tapia" << std::endl;
    Ts a1 = 10.1, a2=7.2;
    std::cout<<"La resta es: " << subtraction(a1, a2) << "\n\n";
}
// 4. Lopez Flores Royer Amed
void DemoInicialLopezFloresRoyerAmed(){
    std::cout << "Demo Lopez Flores Royer Amed" << std::endl;
    MultParamFloat mpx = 6.1, mpy = 7.2;
    MultParamFloat mpr = multiplicar(mpx, mpy);
    std::cout << "multiplicar(" << mpx << "," << mpy << ")=" << mpr << "\n\n";
    MultParamInt mpi1 = 5, mpi2 = 10;
    MultParamInt mpir = multiplicar(mpi1, mpi2);
    std::cout << "multiplicar(" << mpi1 << "," << mpi2 << ")=" << mpir << "\n\n";
}
// 5. López Sandoval, Heiner
void DemoInicialLopezSandoval(){
    std::cout << "Demo Lopez Sandoval Heiner" << std::endl;
    T5 f11 = 20, f21 = 4 ;
    std::cout << f11 << " / " << f21 << " = " << division(f11,f21) << "\n" ;
    T5 f12 = 2, f22 = 3 ;
    std::cout << f12 << " / " << f22 << " = " << division(f12,f22) << "\n" ;
}

// 6. Mallaupoma Cesar
void DemoInicialCesarMallaupoma(){
    // genera un numero aleatorio
    std::cout << "Demo Cesar Mallaupoma Orellana" << std::endl;
    srand(1);
    MiInt aleatorio = generarNumAleatorio<MiInt>();
    std::cout << "El numero aleatorio generado es "<< aleatorio  << "\n\n";
}

// 7. Miranda Zarate Jorge Luis
void DemoInicialMirandaZarate(){
    std::cout << "Demo Miranda Zarate Jorge" << std::endl;
    X1 j0 = 10;
    std::cout << j0 << "! = " << factorial(j0) << "\n\n";
}

// 8. Riveros Guevara
void DemoInicialRiverosGuevara(){
    std::cout << "Demo Riveros Guevara" << std::endl;
    TH n = 29;
    if (esPrimo(n)) {
        std::cout << n << " es un número primo.\n\n";
    } else {
        std::cout << n << " no es un número primo.\n\n";
    }
    X2 j1 = 13;
    std::cout << j1 << "! = " << factorial(j1) << "\n\n";
}

// 9. Segovia Giancarlo
/**
 * @brief Función de demostración inicial de `fibonacci(int)`.
 *
 * Esta función muestra un mensaje de inicio en consola y calcula
 * el valor de la serie de Fibonacci para un número fijo.
 * El resultado se imprime en pantalla.
 *
 * La función utiliza la función `fibonacci(int)` para realizar
 * el cálculo.
 *
 * @author Giancarlo Segovia - MCS UNI 2026
 * @date 07/02/2026
 */
void DemoInicialSegoviaGiancarlo() {
    int x;
    std::cout << "Demo Giancarlo Segovia" << std::endl;
    x = 6;
    std::cout << "Fibonacci de " << x << " es " << fibonacci(x) << "\n\n";
}

// 10. Suarez Maciel Susana Isabel.
    void DemoInicialSusana(){
    std::cout << "Demo Susana Suarez Maciel" << std::endl;
    ParamDouble sx = 20, sy = 45;
    std::cout << "Promedio(x,y)=" << average(sx,sy) << "\n\n";
    }


// 11. Tellez Jhon
void DemoInicialJhoinTellez();
// 12. Valcarcel Julian

// 13. Vilca Aguilar Luis

void DemoInicialVilcaAguilar(){
    std::cout << "Demo Vilca Aguilar Luis" << std::endl;
    F1 L1 = 23.0;
    raiz(L1);
    std::cout << "La raiz (" << L1 << ") = " << raiz(L1) << "\n\n";
}

// 14. Vinatea Chávez Camilo Jorge   
void DemoInicialCamiloVinatea(){
    std::cout << "Demo Vinatea Camilo" << std::endl;

    T2 base = 3.1415; 
    IntParam exponent = 3;
    T2 result = power(base, exponent);
    std::cout << base << " ^ " << exponent << " = " << result << "\n\n";
    
    IntParam base2 = 6; 
    IntParam exponent2 = 4;
    IntParam result2 = power(base2, exponent2);
    std::cout << base2 << " ^ " << exponent2 << " = " << result2 << "\n\n";
}
