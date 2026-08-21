#include <iostream>
using namespace std;


int reverso(int numero) {
    int invertido = 0;

    while (numero > 0) {
        invertido = invertido * 10 + (numero % 10);
        numero = numero / 10;
    }

    return invertido;
}

int main() {
    int n;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    cout << "Reverso: " << reverso(n) << endl;

    return 0;
}