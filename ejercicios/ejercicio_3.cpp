#include <iostream>

int main() {
    // Declarar variables
    double base, altura, perimetro;

    // Pedir al usuario que ingrese la base y la altura
    std::cout << "Ingrese la base del rectangulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del rectangulo: ";
    std::cin >> altura;

    // Calcular el perímetro
    perimetro = 2 * (base + altura);

    // Mostrar el resultado por pantalla
    std::cout << "El perimetro del rectangulo es: " << perimetro << std::endl;

    return 0;
}
