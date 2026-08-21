#include <iostream>
using namespace std;

int main() {
    int num, quadrado, soma = 0;

    cout << "Digite um numero: ";
    cin >> num;

    quadrado = num * num;

    while (quadrado > 0) {
        soma += quadrado % 10;  
        quadrado /= 10;         
    }

    cout << "Soma dos digitos do quadrado: " << soma << endl;

    return 0;
}