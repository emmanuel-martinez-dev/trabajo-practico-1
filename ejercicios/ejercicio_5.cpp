#include <iostream>

int main() {
    // Declarar variables para almacenar los sueldos
    double sueldo1, sueldo2, sueldo3;

    // Solicitar los sueldos de los empleados
    std::cout << "Ingrese el sueldo del empleado 1: ";
    std::cin >> sueldo1;
    std::cout << "Ingrese el sueldo del empleado 2: ";
    std::cin >> sueldo2;
    std::cout << "Ingrese el sueldo del empleado 3: ";
    std::cin >> sueldo3;

    // Calcular el sueldo promedio
    double sueldoPromedio = (sueldo1 + sueldo2 + sueldo3) / 3;

    // Emitir el sueldo promedio por pantalla
    std::cout << "El sueldo promedio es: " << sueldoPromedio << std::endl;

    return 0;
}
