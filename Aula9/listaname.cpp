//teste
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    int x;
    cout << "Quantos nomes? ";
    cin >> x;

    map<int, vector<string>> grupos;

    for (int i = 0; i < x; i++)
    {
        string nome;
        cin >> nome;

        grupos[nome.length()].push_back(nome);
    }

    int maior = 0;

    for (auto grupo : grupos)
    {
        if (grupo.second.size() > maior)
        {
            maior = grupo.second.size();
        }
    }

    for (int i = 0; i < maior; i++)
    {
        for (auto grupo : grupos)
        {
            if (i < grupo.second.size())
            {
                cout << grupo.second[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}