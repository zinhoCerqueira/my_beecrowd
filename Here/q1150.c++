#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int x, z, soma = 0, contador = 0;

    cin >> x >> z;

    while(z <= x){
        cin >> z;
    }

    for(int i = x; soma < z; i++ ){
        soma = soma + i;
        contador++;
    }

    cout << contador << endl;

    return 0;
    
}