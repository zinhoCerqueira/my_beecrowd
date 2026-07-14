#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int n , m;
    int troco;

    cin >> n >> m;

    while(n != 0 && m != 0){
        troco = m - n;

        for(int i = 0; i < 2; i++){
            if(troco == 0){
                troco = -1;
            }
            else if(troco >= 100){
                troco = troco - 100;
            }
            else if(troco >= 50){
                troco = troco - 50;
            }
            else if(troco >= 20){
                troco = troco - 20;
            }
            else if(troco >= 10){
                troco = troco - 10;
            }
            else if(troco >= 5){
                troco = troco - 5;
            }
            else if(troco >= 2){
                troco = troco - 2;
            }

        }

        if(troco == 0){
            cout << "possible" << endl;
        }
        else{
            cout << "impossible" << endl;
        }

        cin >> n >> m;
    }
    return 0;
    
}