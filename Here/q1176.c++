#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    long long int x, n, soma, aux;
    long long int a = 1, b = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;

    
        if(x == 0){
            cout << "Fib(0) = "<< "0" << endl;
        }
        else if(x == 1){
            cout << "Fib(1) = "<< "1" << endl;
        }
        else if(x == 2){
            cout << "Fib(2) = "<< "1" << endl;
        }
        else{
            for(int j = 0; j < x-2 ; j++){
                soma = a + b;
                a = b;
                b = soma;
            }
            cout << "Fib(" << x << ") = " << soma << endl;
            
        }
        soma = 0;
        a = 1;
        b = 1;
    }
    

    return 0;
    
}