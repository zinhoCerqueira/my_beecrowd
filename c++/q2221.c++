#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    int a;
    int bonus, atc1, def1, lvl1, atc2, def2, lvl2;
    int valor1, valor2;

    cin >> a;

    for(int i = 0; i < a; i++){
        
        cin >> bonus;
        cin >> atc1 >> def1 >> lvl1;
        cin >> atc2 >> def2 >> lvl2;

        valor1 = (atc1 + def1) / 2;
        valor2 = (atc2 + def2) / 2;

        
        if(lvl1 % 2 == 0){
            valor1 = valor1 + bonus;
        }

        if(lvl2 % 2 == 0){
            valor2 = valor2 + bonus;
        }

        if(valor1 > valor2){
            cout << "Dabriel" << endl;
        }
        else if(valor2 > valor1){
            cout << "Guarte" << endl;
        }
        else{
            cout << "Empate" << endl;
        }

        valor1 = 0;
        valor2 = 0;

    }
    

    return 0;
}