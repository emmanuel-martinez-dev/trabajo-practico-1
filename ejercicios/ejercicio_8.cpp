#include <iostream>

int main() {
    // Declarar variables
    double importeTotal, descuento, totalAPagar;

    // Pedir al usuario que ingrese el importe total
    std::cout << "Ingrese el importe total de la compra: ";
    std::cin >> importeTotal;

    // Calcular el descuento (15% del importe total)
    descuento = importeTotal * 0.15;

    // Calcular el total a pagar (importe total - descuento)
    totalAPagar = importeTotal - descuento;

    // Mostrar el resultado
    std::cout << "El total a pagar con el descuento aplicado es: $" << totalAPagar << std::endl;

    return 0;
}
