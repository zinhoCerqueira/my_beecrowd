#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main()
{

    cout << fixed << setprecision(2);

    float salario, valor, total = 0;

    cin >> salario;

    if (salario <= 2000)
    {
        cout << "Isento" << endl;
    }

    if (salario > 2000)
    {
        if (salario < 3000)
        {
            valor = (salario - 2000) * 8 / 100;
            total = total + valor;
        }
        else{
            valor = 1000 * 8 / 100;
            total = total + valor;
        }
    }

    if (salario > 3000){
        if (salario < 4500)
        {
            valor = (salario - 3000) * 18 / 100;
            total = total + valor;
        }
        else{
            valor = 1500 * 18 / 100;
            total = total + valor;
        }
    }

    if (salario > 4500)
    {
        valor = (salario - 4500) * 28 / 100;
        total = total + valor;
    }

    if(salario > 2000){
        cout << "R$ " << total << endl; 
    }
    

    return 0;
}