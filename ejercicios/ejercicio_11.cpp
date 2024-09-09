#include <iostream>

int main() {
    // Declarar variables
    float importeTotal;
    int porcentajeGeneral, porcentajeTecnologia, porcentajeCienciasSociales;
    float importeGeneral, importeTecnologia, importeCienciasSociales;

    // Pedir el importe total
    std::cout << "Ingrese el importe total (en pesos) para la compra mensual: ";
    std::cin >> importeTotal;

    // Pedir los porcentajes
    std::cout << "Ingrese el porcentaje para Libros de Interés General (20 para 20%): ";
    std::cin >> porcentajeGeneral;
    std::cout << "Ingrese el porcentaje para Libros de Tecnología (20 para 20%): ";
    std::cin >> porcentajeTecnologia;
    std::cout << "Ingrese el porcentaje para Libros de Ciencias Sociales (20 para 20%): ";
    std::cin >> porcentajeCienciasSociales;

    // Calcular el importe para cada tipo de libro
    importeGeneral = (importeTotal / 100) * porcentajeGeneral;
    importeTecnologia = (importeTotal / 100) * porcentajeTecnologia;
    importeCienciasSociales = (importeTotal / 100) * porcentajeCienciasSociales;

    // Mostrar los resultados
    std::cout << "Importe que invertirá en Libros de Interés General: $" << importeGeneral << std::endl;
    std::cout << "Importe que invertirá en Libros de Tecnología: $" << importeTecnologia << std::endl;
    std::cout << "Importe que invertirá en Libros de Ciencias Sociales: $" << importeCienciasSociales << std::endl;

    return 0;
}
