#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;

int calculaTotal(int n) {
    int total = 0, init = 7;
    
    
    return total;
}
 
int main() {

    int i, numeroCaso = 0, quantidadeNumeros = -1, contador = 0;
    bool p1 = false, p2 = false;
    int total = 0;

    while(cin >> i){
        numeroCaso++;


        if(i == 0){
            cout << "Caso " << numeroCaso << ": 1 numero" << endl;
            cout << "0" << endl;
            cout << endl;
        }
        else if(i == 1){
            cout << "Caso " << numeroCaso << ": 2 numeros" << endl;
            cout << "0 1" << endl;
            cout << endl;
        }
        else if(i == 2){
            cout << "Caso " << numeroCaso << ": 4 numeros" << endl;
            cout << "0 1 2 2" << endl;
            cout << endl;
        }
        else if(i == 3){
            cout << "Caso " << numeroCaso << ": 7 numeros" << endl;
            cout << "0 1 2 2 3 3 3" << endl;
            cout << endl;
        }
        else {
            
            //int total = calculaTotal(i);
            total = 0;
            total++;
            for(int j = 0; j <= i; j++){
                for(int k = 0; k < j; k++){
                    total++;
                }
            }

            cout << "Caso " << numeroCaso << ": " << total << " numeros" << endl; 


            cout << 0 ;
            for(int j = 0; j <= i; j++){
                for(int k = 0; k < j; k++){
                    cout << " " << j;
                }
            }
            cout << endl << endl;
        }

        
    }
    return 0;
    
}