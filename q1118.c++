#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main()
{

    float n1 = -1.0, n2 = -1.0, valor;
    int n = 0, novo = 1;
    cout << fixed << setprecision(2);

    while(novo == 1){
        while (n < 2){
            cin >> valor;

            if (valor >= 0.0 && valor <= 10.0){
                if (n1 == -1.0){
                    n1 = valor;
                    n++;
                }
                else if (n2 == -1.0){
                    n2 = valor;
                    n++;
                    cout << "media = " << (n1 + n2) / 2 << endl;
                }
            }
            else{
                cout << "nota invalida" << endl;
            }
    }

    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> novo;

    if(novo == 1){
        n = 0;
        n1 = -1.0;
        n2 = -1.0;
    }
    else if(novo == 2){
        novo = 2;
    }
    else{
        novo = 1;
    }

    }
    

    

    return 0;
}