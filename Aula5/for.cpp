#include <iostream>
using namespace std;

int main() {
    int soma = 0;

    for (int i = 51; i <= 500; i += 6) {
        soma += i;
    }

    cout << soma << endl;

    return 0;
}