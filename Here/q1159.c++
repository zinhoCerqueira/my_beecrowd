#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n, soma = 0, cont = 0;

    cin >> n;

    while(n != 0){

        for(int i = n; cont < 5; i++){
            if(i % 2 == 0){
                soma = soma + i;
                cont++;
            }
        }

        cout << soma << endl;
        soma = 0;
        cont = 0;

        cin >> n;

    }
    return 0;

    // O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar 
    // quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares 
    // consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, 
    // por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, 
    // enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a 
    // soma de 12+14+16+18+20.
    
}