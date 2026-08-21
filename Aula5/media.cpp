#include <iostream>

using namespace std;

int main(){
    int numero;
    int x = 0;
    int i = 1;
    int resultado;
    cout << "Media aritmetica" << endl;
    cout << "Quantos numeros serão digitados?";
    cin >> numero;
    while (i <= numero){
      cout << "Digite qualquer numero";
      int x1;
      cin >> x1;
      x += x1;
       i++;
    
      }
    resultado = x/numero;
    cout << "Resultado: " + resultado << endl;
    return 0;
}
    








