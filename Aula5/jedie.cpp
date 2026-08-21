#include <iostream>
using namespace std;

int main() {
    int horas_dia;
    cout << "Quantas horas voce treina por dia? ";
    cin >> horas_dia;

    int horas_semana = horas_dia * 5;

    int total_horas = 0;
    int semanas = 0;

    while (total_horas < 1000) {
        total_horas += horas_semana;
        semanas++;
    }

    int dias = semanas * 5;
    float meses = semanas / 4.5;

    cout << "Semanas: " << semanas << endl;
    cout << "Dias: " << dias << endl;
    cout << "Meses: " << meses << endl;

    return 0;
}

