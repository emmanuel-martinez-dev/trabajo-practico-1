#include <iostream>

int main() {
    // Declarar variables
    float importeTotal;
    float porcentajeGeneral = 0.5;
    float porcentajeTecnologia = 0.3;
    float porcentajeCienciasSociales = 0.2;
    float importeGeneral, importeTecnologia, importeCienciasSociales;

    // Pedir el importe total
    std::cout << "Ingrese el importe total (en pesos) para la compra mensual: ";
    std::cin >> importeTotal;

    // Calcular el importe para cada tipo de libro
    importeGeneral = importeTotal * porcentajeGeneral;
    importeTecnologia = importeTotal * porcentajeTecnologia;
    importeCienciasSociales = importeTotal * porcentajeCienciasSociales;

    // Mostrar los resultados
    std::cout << "Importe que invertira en Libros de Interes General: $" << importeGeneral << std::endl;
    std::cout << "Importe que invertira en Libros de Tecnologia: $" << importeTecnologia << std::endl;
    std::cout << "Importe que invertira en Libros de Ciencias Sociales: $" << importeCienciasSociales << std::endl;

    return 0;
}
