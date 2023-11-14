#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n, menor = 101, local, valor;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> valor;
        if(valor < menor){
            menor = valor;
            local = i;
        }
    }

    cout << local << endl;

    return 0;
    
}