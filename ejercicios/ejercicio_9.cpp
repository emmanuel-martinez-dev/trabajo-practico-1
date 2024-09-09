#include <iostream>

int main() {
    // Declarar variable para almacenar el importe de los tickets
    double importeTickets;

    // Pedir al usuario que ingrese el importe de los tickets
    std::cout << "Ingrese el importe de los tickets: ";
    std::cin >> importeTickets;

    // Calcular el valor total de los tickets con la promoción
    double valorTotal = importeTickets * 1.25;

    // Mostrar el resultado al usuario
    std::cout << "El valor total de los tickets con la promocion es: " << valorTotal << std::endl;

    return 0;
}
