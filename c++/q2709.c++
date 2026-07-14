#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <vector>

using namespace std;

bool ehPrimo(int numero)
{
    if (numero <= 1)
    {
        return false; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= numero; ++i)
    {
        if (numero % i == 0)
        {
            return false; // Encontrou um divisor, não é primo
        }
    }

    return true; // Se nenhum divisor foi encontrado, é primo
}

int main()
{
    cout << fixed << setprecision(1);

    int n, x, soma = 0;
    vector<int> vetor;

    while (cin >> n)
    {

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vetor.push_back(x);
        }

        int pulo, contadorpulo = 0;
        bool ok = true;
        soma = 0;
        cin >> pulo;

        for (int i = vetor.size() - 1; i >= 0; i--)
        {
            if (ok)
            {
                soma = soma + vetor[i];
                ok = false;
                // cout << "Entrou na soma." << endl;
            }

            contadorpulo++;
            if (contadorpulo == pulo)
            {
                contadorpulo = 0;
                ok = true;
            }
        }

        // cout << "Soma: "<<soma << endl;
        if (ehPrimo(soma))
        {
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        }
        else{
            cout << "Bad boy! I’ll hit you." << endl;
        }
        vetor.clear();

    }

    return 0;
}