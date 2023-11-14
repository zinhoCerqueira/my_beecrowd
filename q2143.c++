#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int t, a, b, total, cont = 0;

    cin >> t;

    while(t != 0){
        cin >> a;

        if(a % 2 == 0){
            total = 2 + (a - 2)*2;
        }
        else{
            total = 1 + (a - 1)*2;
        }
        
        cout << total << endl;
        cont++;

        if(cont == t){
            cont = 0;
            cin >> t;
        }
        
    }
    return 0;
    
}