#include <iostream>
#include <vector>

int main(){
    std::cout << "MCS-2026\n";
    std::vector<double> calificaciones;
    calificaciones.push_back(10.0);
    calificaciones.push_back(9.5);
    calificaciones.push_back(8.7);
    std::cout << "La primera calificacion es: " << calificaciones[0] << std::endl;
    return 0;
}