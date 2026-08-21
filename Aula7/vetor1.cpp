#include <iostream>
using namespace std;

int main(){
   int num[5];
   int x;
   int mn = 0;
   int p = 0;
   int n[5];
   cout<< "Digite 5 numeros: "<<endl;
   for(int i = 0; i < 5; i++ ){
      cin >> x;
      num[i] = x;
      if(x>mn){
         mn = x;
         p = i;
      } 
   } 
   cout << "numeros: ";
   for (int i = 0; i < 5; i++ ){
      cout << num[i] << " ";
   }
    cout << endl << "numero maior: " << mn << endl;
    cout << "p do numero maior: " << p << endl;


   
}










