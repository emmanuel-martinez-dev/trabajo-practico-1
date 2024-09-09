#include <iostream>

int main() {
    // Declarar variables
    double importeTotalFacturado;
    const double sueldoFijo = 1000.0;
    const double comisionPorcentaje = 0.05;

    // Solicitar el importe total facturado
    std::cout << "Ingrese el importe total facturado: ";
    std::cin >> importeTotalFacturado;

    // Calcular la comisión total
    double comisionTotal = importeTotalFacturado * comisionPorcentaje;

    // Calcular el sueldo total a pagar
    double sueldoTotal = sueldoFijo + comisionTotal;

    // Mostrar el sueldo total a pagar por pantalla
    std::cout << "El sueldo total a pagar es: $" << sueldoTotal << std::endl;

    return 0;
}
