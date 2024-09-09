#include <iostream>

int main() {
    // Declarar variables
    float base, altura, superficie;

    // Pedir al usuario que ingrese la base y la altura
    std::cout << "Ingrese la base del rectangulo: ";
    std::cin >> base;
    std::cout << "Ingrese la altura del rectangulo: ";
    std::cin >> altura;

    // Calcular la superficie
    superficie = base * altura;

    // Mostrar el resultado
    std::cout << "La superficie del rectangulo es: " << superficie << std::endl;

    return 0;
}
