#include<iostream>
#include <random>
using namespace std;

int main()
{    int x;
      int tentativas=0;
     random_device numAleatorio;
    mt19937 gerador(numAleatorio());
    uniform_int_distribution<>distribuicao(1,100);
    int valorinteiro = distribuicao(gerador);
         
    do{
        cout << "Advinhe o numero!" << endl;
        cin >> x;
        if(x>valorinteiro){
        cout << "Chutou alto" << endl;
        }
        else if(x<valorinteiro){
        cout << "Chutou baixo" << endl;
        }
        tentativas++;
    }while(x!=valorinteiro);
        cout << "Acertou em " << tentativas << " tentativas" << endl;
    
    return 0;
}