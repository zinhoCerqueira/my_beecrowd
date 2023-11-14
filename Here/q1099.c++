#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n, x, y, aux, soma = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;

        if(x > y){  
            aux = y;
            y = x;
            x = aux;
        }

        for(int j = x + 1; j < y ; j++){
            if(j % 2 != 0){
                soma = soma + j;
            }
        }

        cout << soma << endl;
        soma = 0;
    }

    return 0;
    
}