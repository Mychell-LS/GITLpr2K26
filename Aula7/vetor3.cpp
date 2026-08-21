#include <iostream>
using namespace std;

int main(){
    int num[10];
    int x=0;
    int y=0;
    int q=0;
    cout << "Digite 10 numeros inteiros: " << endl;
    for(int i=0; i<10; i++){
        cin >> x;
        num[i] = x;
    }
    cout << "Qual numero voce gostaria de encontrar?" << endl;
    cin >> y;
    for(int i = 0; i<10; i++){
        if(num[i]==y){
            cout << "O numero eh:  " << y << endl;
            cout << "A posicao eh: " << num[i] << endl;
            q++;
        }
    }
    cout << "O numero de ocorrencias eh: " << q << endl;
}










