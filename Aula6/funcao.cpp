#include <iostream>
using namespace std;


double mediaPares(int quantidade) {
    int numero, soma = 0, contador = 0;
    int i = 1;

    while (i <= quantidade) {
        cout << "Digite um numero: ";
        cin >> numero;

        if (numero % 2 == 0) {
            soma += numero;
            contador++;
        }

        i++;
    }

    if (contador == 0) {
        return 0;
    }

    return (double)soma / contador;
}


int somaImparesMultiplos3() {
    int soma = 0;

    for (int i = 51; i <= 500; i += 6) {
        soma += i;
    }

    return soma;
}


int somaDigitosQuadrado(int numero) {
    int quadrado = numero * numero;
    int soma = 0;

    while (quadrado > 0) {
        soma += quadrado % 10;
        quadrado /= 10;
    }

    return soma;
}

int main() {
    int opcao;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1 - Media dos numeros pares" << endl;
        cout << "2 - Soma dos impares multiplos de 3" << endl;
        cout << "3 - Soma dos digitos do quadrado" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {

            case 1: {
                int quantidade;

                cout << "Quantos numeros serao digitados? ";
                cin >> quantidade;

                double media = mediaPares(quantidade);

                if (media == 0) {
                    cout << "Nenhum numero par foi digitado." << endl;
                } else {
                    cout << "Media dos numeros pares: " << media << endl;
                }

                break;
            }

            case 2: {
                int resultado = somaImparesMultiplos3();

                cout << "Soma dos impares multiplos de 3 entre 50 e 500: ";
                cout << resultado << endl;

                break;
            }

            case 3: {
                int numero;

                cout << "Digite um numero: ";
                cin >> numero;

                int resultado = somaDigitosQuadrado(numero);

                cout << "Soma dos digitos do quadrado: ";
                cout << resultado << endl;

                break;
            }

            case 0:
                cout << "Encerrando o programa..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

    return 0;
}