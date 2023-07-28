#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n = 0, al = 0, gas = 0, di = 0;
    
    while(n != 4){
        cin >> n;
        if(n == 1){
            al++;
        }
        else if(n == 2){
            gas++;
        }
        else if(n == 3){
            di++;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: "<< al << endl;
    cout << "Gasolina: "<< gas << endl;
    cout << "Diesel: "<< di << endl;

    

    return 0;
    
}