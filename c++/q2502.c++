#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main()
{
    int c, n;
    string chave, valor, frase;

    while (cin >> c >> n)
    {
        cin >> chave;
        cin >> valor;
        cin.ignore(); // Consumir o caractere de quebra de linha

        for (int i = 0; i < n; i++)
        {
            getline(cin, frase);

            for (int j = 0; j < frase.length(); ++j)
            {
                for (int k = 0; k < valor.length(); ++k)
                {
                    if (isdigit(frase[j]))
                    {
                        if (frase[j] == valor[k])
                        {
                            frase[j] = tolower(chave[k]);
                            break;
                        }
                        
                    }
                    else
                    {
                        if (frase[j] == valor[k])
                        {
                            frase[j] = chave[k];
                            break;
                        }
                        else if (frase[j] == tolower(valor[k]))
                        {

                            frase[j] = tolower(chave[k]);
                            break;
                        }
                        else if (frase[j] == tolower(chave[k]))
                        {
                            frase[j] = tolower(valor[k]);
                            break;
                        }
                        else if (frase[j] == chave[k])
                        {
                            frase[j] = valor[k];
                            break;
                        }
                    }
                }
            }
            cout << frase << endl;
        }
    }

    return 0;
}
