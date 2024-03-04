#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    int entrega, final;
    cin >> entrega >> final;

    if(final < entrega || final >= 24){
        cout << "Eu odeio a professora!" << endl;
    }
    else{
        if(entrega < final - 3 || final < 22){
        cout << "Muito bem! Apresenta antes do Natal!" << endl;
        }
        else{
            cout << "Parece o trabalho do meu filho!" << endl;
            if(entrega >= 22){
                cout << "Fail! Entao eh nataaaaal!" << endl;
            }
            else if(entrega < 23){
                cout << "TCC Apresentado!" << endl;
            }
        }

        
    }
    
    
        
    

    

    return 0;
}
