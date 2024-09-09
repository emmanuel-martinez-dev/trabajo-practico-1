#include <iostream>

int main() {
    int num1, num2, suma;

    // Pedir los números al usuario
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    // Calcular la suma
    suma = num1 + num2;

    // Mostrar el resultado
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;

    return 0;
}