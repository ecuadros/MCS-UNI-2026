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
    Complex(Real r = 0.0, Imag i = 0.0) { ///< Constructor con valores por defecto
        setReal(r);     setImag(i);
    } 
    Complex(const Complex& other) { ///< Constructor de copia
        setReal(other.getReal());     setImag(other.getImag());
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
    // Complex operator-(const Complex& other) const{ ///< Resta de números complejos
    //     return Complex(0, 0);
    // }
    //susana
    Complex operator-(const Complex& other) const{
    return Complex(m_real - other.m_real, m_imag - other.m_imag);
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
    Complex &operator-=(const Complex& other) {
        m_real -= other.getReal();
        m_imag -= other.getImag();
        return *this; 
    }
    // 4. Lopez Flores Royer Amed
    // Según la IA mejor definir el operador *=, 
    //y luego definir el operador * en términos de *= 
    //por que así se evita la duplicación de código y 
    //se mejora el mantenimiento, además de que el operador
    // *= es más eficiente para objetos grandes como los complejos, 
    //ya que modifica el objeto actual en lugar de crear uno nuevo.
    Complex& operator*=(const Complex& other) {
        Real newReal = getReal() * other.getReal() - getImag() * other.getImag();
        Imag newImag = getReal() * other.getImag() + getImag() * other.getReal();
        setReal(newReal);
        setImag(newImag);
        return *this;
    }
    // 5. López Sandoval, Heiner

    /*
    // Operador /
    Complex operator/(const Complex& other) const {
        double denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
        return Complex((m_real * other.m_real + m_imag * other.m_imag) / denom,
                       (m_imag * other.m_real - m_real * other.m_imag) / denom);
    }
    */

    // Operador /=
    Complex& operator/=(const Complex& other) {
        *this = *this / other;  // reutiliza operator/
        return *this;
    }

    // 6. Mallaupoma Cesar

    // 7. Miranda Zarate Jorge Luis
    // Función para calcular la potencia de un número complejo (z^n)
    Complex operator^(int n){
        Complex result(1.0, 0.0);
        for(int i = 0; i < n; ++i){
            result = result * (*this);
        }
        return result;
    }

    // 8. Riveros Guevara

    // 9. Segovia Giancarlo

    // 10. Suarez Maciel Susana Isabel
    Complex& operator-=(const Complex& other){
    m_real -= other.m_real;
    m_imag -= other.m_imag;
    return *this;
    }

    // 11. Tellez Jhon
    Complex operator*(const Complex& other) const{ ///< Multiplicación de números complejos
        Real real = getReal() * other.getReal() - getImag() * other.getImag();
        Imag imag = getReal() * other.getImag() + getImag() * other.getReal();

        return Complex(real, imag);
    } 

    // 12. Valcarcel Julian

    // 13. Vilca Aguilar Luis

    // 14. Vinatea Chávez Camilo Jorge  

    void PrintX(ostream &os) const{
        os << getReal() << " + " << getImag() << "i" << endl;
    }
};

inline ostream &operator<<(ostream &os, const Complex &c){
    return os << c.getReal() << " + " << c.getImag() << "i" << endl;
}

void DemoComplex();

#endif // __COMPLEX_H__