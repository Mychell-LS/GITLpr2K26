#include <iostream>
using namespace std;

int main(){
   int num[10];
   int x;
   int np[10];
   int z = 0; // posição do par
   int zi = 0; // posição do ímpar
   int ni[10];
   cout<< "Digite 10 numeros"<<endl;
   for(int i = 0; i < 10; i++ ){
      cin >> x;
      num[i] = x;
      if(num[i] % 2){
         np[z] = num[i];
         z++;
      }
      else{
         ni[zi] = num[i];
         zi++;
      }
   }

   cout << "numeros impares:";
   for(int i = 0; i < z; i++ ){
      cout << " " << np[i];
   }
   cout << "numeros pares:";
   for(int i = 0; i < zi; i++ ){
      cout << " " << ni[i];
   }
}










