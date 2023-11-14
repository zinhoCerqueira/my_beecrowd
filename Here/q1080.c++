#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {
    int  maior, pos, x;

    for(int i = 1; i <= 100; i++){
        cin >> x;
        if(i == 1){
            maior = x;
        }

        if(maior < x){
            maior = x;
            pos = i;
        }
    }
    

    cout << maior << endl;
    cout << pos << endl;
    
    
    return 0;
    
}