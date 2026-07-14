#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n, c = 0;

    
    cin >> n;

    while(c <= 5){
        if(n % 2 != 0){
            cout << n << endl;
            c++;
            
        }
        n++;
    }
    

    return 0;
    
}