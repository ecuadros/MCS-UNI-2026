#ifndef __COMPLEX_H__
#define __COMPLEX_H__
#include <iostream>
#include "types.h"
using namespace std;

/**
 * @file complex.h
 * @brief Declaración de la clase Complex.
 *        Esta clase representa números complejos y 
 *        proporciona operaciones básicas como suma,
 *        resta, multiplicación y división.
 */
class Complex{
private:
    Real m_real; ///< Parte real del número complejo
    Imag m_imag; ///< Parte imaginaria del número complejo
public:
    // Constructor
    // 1. Tiene el mismo nombre que la clase.
    // 2. No tiene tipo de retorno (ni siquiera void).
    // 3. Puede haber mas de 1 (sobrecarga) y se diferencian por la cantidad o tipo de parámetros.
    // 4. Se llama automáticamente al crear un objeto de la clase.
    // 5. Un constructor puede llamar a otro constructor (delegación de constructores).
    // 6. Si no se define un constructor, el compilador genera uno por defecto (sin parámetros).
    // 7. Si se define un constructor con parámetros, el compilador no genera el constructor por defecto.
    Complex(Real r = 0.0, Imag i = 0.0) : m_real(r), m_imag(i) {} ///< Constructor con valores por defecto
    Complex(const Complex& other) 
        : Complex(other.m_real, other.m_imag) { ///< Constructor de copia
        cout << "Copia de: " << other.m_real << ", " << other.m_imag << endl;
    }
    // TODO: Crear Move constructor
    
    /** Destructor:
    // 1. Tiene el mismo nombre que la clase pero con ~ al inicio.
    // 2. No tiene tipo de retorno (ni siquiera void).
    // 3. No puede tener parámetros.
    // 4. Se llama automáticamente al destruir un objeto de la clase (cuando sale de ámbito o se elimina).
    // 5. Se utiliza para liberar recursos (memoria, archivos, conexiones, etc.) que el objeto haya adquirido durante su vida útil.
    // 6. Solo puede haber un uno por clase (no hay sobrecarga).
    // 7. Es recomendable que siempre sea virtual si la clase 
    //    está destinada a ser una clase base para herencia,
    //    para asegurar que se llame al destructor correcto
    //    en caso de eliminación a través de un puntero a la clase base.
    */
    ~Complex(){
        cout << "Destructor de Complex(" << m_real << ", " << m_imag << "i)" << endl;
    }
    void setReal(Real r) { m_real = r; } ///< Establecer la parte real
    Real getReal() const { return m_real; } ///< Obtener la parte real

    void setImag(Imag i) { m_imag = i; } ///< Establecer la parte imaginaria
    Imag getImag() const { return m_imag; } ///< Obtener la parte imaginaria

    Complex conjugate() const { ///< Conjugado de un número complejo
        return Complex(getReal(), -getImag());
    }

    Complex &operator=(const Complex& other) { ///< Suma de números complejos
        setReal(other.getReal());
        setImag(other.getImag());
        return *this;
    }
    Complex operator+(const Complex& other) const{ ///< Suma de números complejos
        return Complex(getReal()+other.getReal(), getImag()+other.getImag());
    }
    Complex operator-(const Complex& other) const{ ///< Resta de números complejos
        return Complex(0, 0);
    }

    Complex operator*(const Complex& other) const{ ///< Multiplicación de números complejos
        return Complex(1, 1);
    } 
    
    Complex operator/(const Complex& other) const{ ///< División de números complejos
        Real denominator = other.getReal() * other.getReal() + other.getImag() * other.getImag();
        if (denominator == 0) {
            throw invalid_argument("Division by zero");
        }
        // Cálculo de numerador multiplicando por la conjugada del denominador
        Complex numerator = (*this) * other.conjugate();
        // Se retorna el resultado dividiendo el numerador por el denominador
        return Complex(numerator.getReal() / denominator,
                    numerator.getImag() / denominator);
    }

    // Mas operadores aqui
    
    // 1. Bernaola Gayoso - César Raúl

    // 2. Cuadros-Vargas Ernesto

    // 3. Diaz Tapia Adderly

    // 4. Lopez Flores Royer Amed

    // 5. López Sandoval, Heiner

    // 6. Mallaupoma Cesar

    // 7. Miranda Zarate Jorge Luis

    // 8. Riveros Guevara

    // 9. Segovia Giancarlo

    // 10. Suarez Maciel Susana Isabel.

    // 11. Tellez Jhon

    // 12. Valcarcel Julian

    // 13. Vilca Aguilar Luis

    // 14. Vinatea Chávez Camilo Jorge  

    void PrintX(ostream &os) const{
        os << getReal() << " + " << getImag() << "i" << endl;
    }
};

ostream &operator<<(ostream &os, const Complex &c){
    return os << c.getReal() << " + " << c.getImag() << "i" << endl;
}

void DemoComplex();

#endif // __COMPLEX_H__