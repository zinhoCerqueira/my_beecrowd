#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int par[5], impar[5], x, cpar = 0, cimpar = 0;

    for(int i = 0; i < 15; i++){
        cin >> x;

        if(x % 2 == 0){
            if(cpar != 5){
                par[cpar] = x;
                cpar++;
            }
            else{
                for(int m = 0; m < 5; m++){
                    cout << "par[" << m << "] = " <<par[m] << endl;
                }
                par[0] = x;
                cpar = 1;
            }       
        }
        else{
            if(cimpar != 5){
                impar[cimpar] = x;
                cimpar++;
            }
            else{
                for(int m = 0; m < 5; m++){
                    cout << "impar[" << m << "] = " <<impar[m] << endl;
                }
                impar[0] = x;
                cimpar = 1;
            }  
        }
        
    }

    for(int m = 0; m < cimpar; m++){
        cout << "impar[" << m << "] = " <<impar[m] << endl;
    }

    for(int m = 0; m < cpar; m++){
        cout << "par[" << m << "] = " <<par[m] << endl;
    }


    return 0;
    
}