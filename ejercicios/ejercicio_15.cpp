#include <iostream>

// Función para convertir Celsius a Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return 32 + (celsius * 1.8);
}

int main() {
    double celsius;

    // Pedir al usuario que ingrese la temperatura en Celsius
    std::cout << "Ingrese la temperatura en Celsius: ";
    std::cin >> celsius;

    // Convertir Celsius a Fahrenheit
    double fahrenheit = celsiusToFahrenheit(celsius);

    // Mostrar el resultado
    std::cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit." << std::endl;

    return 0;
}
