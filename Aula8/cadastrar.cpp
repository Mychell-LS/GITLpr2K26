#include <iostream>
using namespace std;
struct produto
{
   int codigo;
   int quantidade;
   string nome;
   int preco;
    
};

int main(){
produto dadobj[3];
produto x;
for(int i = 0; i<3; i++){
    cout << " - Cadastrando produtos - " << endl;
    cout << "Digite o nome do produto: " << endl;
    cin >> x.nome;
     cout << "Digite o codigo do produto: " << endl;
    cin >> x.codigo;
     cout << "Digite a quantidade: " << endl;
    cin >> x.quantidade;
     cout << "Digite o valor do produto: " << endl;
    cin >> x.preco;
    dadobj[i] = x;
}
int s = 0;
int r = 0;
for(int i = 0; i<3; i++){
  dadobj[i].quantidade;
}
cout << "" << endl;
}
