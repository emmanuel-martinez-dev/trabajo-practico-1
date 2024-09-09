#include <iostream>

int main() {
    float precio, cantidad, total;

    // Solicitar el precio del artículo
    std::cout << "Ingrese el precio del articulo: ";
    std::cin >> precio;

    // Solicitar la cantidad vendida
    std::cout << "Ingrese la cantidad vendida: ";
    std::cin >> cantidad;

    // Calcular el total a pagar
    total = precio * cantidad;

    // Emitir el total a pagar por pantalla
    std::cout << "El total a pagar es: $" << total << std::endl;

    return 0;
}
