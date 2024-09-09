#include <iostream>

int main() {
    int piezasPorHora, piezasTotales, horas;

    std::cout << "Ingrese la cantidad de piezas que fabrica la maquina por hora: ";
    std::cin >> piezasPorHora;

    std::cout << "Ingrese la cantidad total de piezas que hay que fabricar: ";
    std::cin >> piezasTotales;

    horas = piezasTotales / piezasPorHora;

    if (piezasTotales % piezasPorHora != 0) {
        horas++;
    }

    std::cout << "La maquina demorara " << horas << " horas en completar la produccion total." << std::endl;

    return 0;
}
