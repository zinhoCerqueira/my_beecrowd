#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    string a;
    char aux[2];
    int hora, minuto;
    int tempo;

    while(cin >> a){

        hora = a[0] - '0';
        aux[0] = a[2];
        aux[1] = a[3];

        int tamanho = sizeof(aux) / sizeof(aux[0]);
        string minhaString(aux, tamanho);

        minuto = stoi(minhaString);
        
        tempo = (60 * hora) + minuto;

        if(tempo > 420){
            cout << "Atraso maximo: " << tempo - 420 << endl;
        }
        else {
            cout << "Atraso maximo: 0" << endl;
        }



    }

    return 0;
    
}