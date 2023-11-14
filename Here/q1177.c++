#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n, cont = 0;

    cin >> n;

    for(int i = 0; i < 1000; i++){
        if(cont == n-1){
            cout << "N[" << i << "] = " << cont << endl;
            cont = 0;
        }
        else{
            cout << "N[" << i << "] = " << cont << endl;
            cont++;
        }
    }
    return 0;
    
}