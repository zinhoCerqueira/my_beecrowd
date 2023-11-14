#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int tam, menor, x, pos;

    cin >> tam;

    for(int i = 0; i < tam; i++){
        cin >> x;

        if(i == 0){
            menor = x;
        }

        if(x < menor){
            menor = x;
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;


    return 0;
    
}