#include <iostream>

int main() {
    int horaIngreso, minutoIngreso;
    int horaEgreso, minutoEgreso;

    // Pedir hora de ingreso
    std::cout << "Ingrese la hora de ingreso (formato 24 horas): ";
    std::cin >> horaIngreso;
    std::cout << "Ingrese el minuto de ingreso: ";
    std::cin >> minutoIngreso;

    // Pedir hora de egreso
    std::cout << "Ingrese la hora de egreso (formato 24 horas): ";
    std::cin >> horaEgreso;
    std::cout << "Ingrese el minuto de egreso: ";
    std::cin >> minutoEgreso;

    // Calcular la cantidad de minutos trabajados
    int minutosTrabajados = (horaEgreso * 60 + minutoEgreso) - (horaIngreso * 60 + minutoIngreso);

    // Mostrar el resultado
    std::cout << "El empleado trabajo " << minutosTrabajados << " minutos." << std::endl;

    return 0;
}
