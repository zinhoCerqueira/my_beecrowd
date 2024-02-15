#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    string a, b;
    cin >> a >> b;

    int posicaoX = a[0] - 'a' + 1;
    int posicaoY = a[1] - '0';
    int destinoX = b[0] - 'a' + 1;
    int destinoY = b[1] - '0';

    // cout << posicaoX << " " << posicaoY << endl;
    // cout << destinoX << " " << destinoY << endl;

    if (destinoX == posicaoX + 1 && destinoY == posicaoY + 2)
    {
        cout << "VALIDO" << endl;
    }
    else if (destinoX == posicaoX + 2 && destinoY == posicaoY + 1)
    {
        cout << "VALIDO" << endl;
    }
    else if (destinoX == posicaoX + 2 && destinoY == posicaoY - 1)
    {
        cout << "VALIDO" << endl;
    }
    else if (destinoX == posicaoX + 1 && destinoY == posicaoY - 2)
    {
        cout << "VALIDO" << endl;
    }
    else if (destinoX == posicaoX - 1 && destinoY == posicaoY - 2)
    {
        cout << "VALIDO" << endl;
    }
    else if (destinoX == posicaoX - 2 && destinoY == posicaoY - 1)
    {
        cout << "VALIDO" << endl;
    }
    else if (destinoX == posicaoX  -2 && destinoY == posicaoY + 1)
    {
        cout << "VALIDO" << endl;
    }
    else if (destinoX == posicaoX - 1 && destinoY == posicaoY + 2)
    {
        cout << "VALIDO" << endl;
    }
    else{
        cout << "INVALIDO" << endl;
    }

    return 0;
}
