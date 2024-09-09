#include <iostream>

int main() {
    int votosCandidato1, votosCandidato2, votosCandidato3, totalVotos;

    // Pedir la cantidad de votos obtenidos por cada candidato
    std::cout << "Ingrese la cantidad de votos obtenidos por el primer candidato: ";
    std::cin >> votosCandidato1;

    std::cout << "Ingrese la cantidad de votos obtenidos por el segundo candidato: ";
    std::cin >> votosCandidato2;

    std::cout << "Ingrese la cantidad de votos obtenidos por el tercer candidato: ";
    std::cin >> votosCandidato3;

    // Calcular el total de votos
    totalVotos = votosCandidato1 + votosCandidato2 + votosCandidato3;

    // Calcular el porcentaje obtenido por cada candidato
    float porcentajeCandidato1 = (float)votosCandidato1 / totalVotos * 100;
    float porcentajeCandidato2 = (float)votosCandidato2 / totalVotos * 100;
    float porcentajeCandidato3 = (float)votosCandidato3 / totalVotos * 100;

    // Emitir el porcentaje obtenido por cada candidato
    std::cout << "El porcentaje obtenido por el primer candidato es: " << porcentajeCandidato1 << "%" << std::endl;
    std::cout << "El porcentaje obtenido por el segundo candidato es: " << porcentajeCandidato2 << "%" << std::endl;
    std::cout << "El porcentaje obtenido por el tercer candidato es: " << porcentajeCandidato3 << "%" << std::endl;

    return 0;
}
