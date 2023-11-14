#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int x, y, aux, soma = 0;

    cin >> x >> y;

    while(x > 0 && y > 0){
        if (x > y){
            aux = y;
            y = x;
            x = aux;
        }

        for(int j = x; j <= y; j++){
            cout << j << " ";
            soma = soma + j;
        }
        cout << "Sum=" << soma << endl;
        soma = 0;

        cin >> x >> y;
    }
    
    return 0;
    
}