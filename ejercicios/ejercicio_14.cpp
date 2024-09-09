#include <iostream>

int main() {
    // Ingreso de la cantidad de medialunas solicitadas por el cliente
    int cantidad_medialunas;
    std::cout << "Ingrese la cantidad de medialunas solicitadas: ";
    std::cin >> cantidad_medialunas;

    // Cálculo del total que debe abonar
    int total = (cantidad_medialunas / 12) * 2 + (cantidad_medialunas % 12) * 20;

    // Información del total que debe abonar
    std::cout << "El total que debe abonar es de: " << total << " pesos" << std::endl;

    return 0;
}
