#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int a, x, melhor = 1;
    while(cin >> a){
        for(int i=0; i<a; i++){
            cin >> x;
            if(x >= 10 && melhor != 3){
                melhor = 2;
            }
            if( x >= 20){
                melhor = 3;
            }
        }
        cout << melhor << endl;
        melhor = 1;
    }




    return 0;
    
}