#include <iostream>

// Función para convertir Fahrenheit a Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() {
    double fahrenheit;

    // Pedir al usuario que ingrese la temperatura en Fahrenheit
    std::cout << "Ingrese la temperatura en Fahrenheit: ";
    std::cin >> fahrenheit;

    // Convertir Fahrenheit a Celsius
    double celsius = fahrenheitToCelsius(fahrenheit);

    // Mostrar el resultado
    std::cout << fahrenheit << " grados Fahrenheit equivalen a " << celsius << " grados Celsius." << std::endl;

    return 0;
}
