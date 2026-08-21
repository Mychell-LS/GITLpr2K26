#include <iostream>
using namespace std;
struct produto
{
   int ano;
   int duracaomin;
   string diretor;
   string titulo;
    
};
int main(){
    produto x;
    produto movies[3];  
    for(int i = 0; i < 3; i++){
        cout << "Digite o ano de lancamento, duracao, diretor e titulo: " << endl; 
        cin >> x.ano;
        cin >> x.duracaomin;
        cin >> x.diretor;
        cin >> x.titulo;
        movies[i] = x;
    }
    int ano;
    string nome;
      cout << endl<< "Os filmes cadastrados sao: ";
      for(int i = 0;i < 3; i++){
        cout<< endl<< movies[i].titulo;
        if(ano > movies[i].ano){
            ano = movies[i].ano;
            nome = movies[i].titulo;
        }
      }
      cout << "O nome do filme mais antigo: " << nome << " Com o ano de: " << ano << endl;

    return 0;
   
}










