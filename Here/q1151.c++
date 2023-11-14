#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int x, a = 0, b = 1, aux;

    cin >> x;

    for(int i =0; i < x; i++){
        if(i == 0){
            cout << a << " "; 
        }
        else if(i == 1){
            cout << b << " ";
        }
        else{
            if(i == x-1){
                cout << a + b << endl;
                aux = a+b;
                a = b;
                b = aux;
            }
            else{
                cout << a + b << " ";
                aux = a+b;
                a = b;
                b = aux;
            }
            
        }
    }

    return 0;
    
}