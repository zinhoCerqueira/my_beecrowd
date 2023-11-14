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
    
    std::list<int> list;
    float n1, n2, aux, n = 0;

    cin >> n1;
    cin >> n2;

    if(n1 > n2){
        for(int i = n1-1; i > n2; i--){
            if(i % 2 != 0){
                n = n + i;
            }
        }
        cout << n << endl;
    }
    else if(n1 < n2){
        for(int i = n1+1; i < n2; i++){
            if(i % 2 != 0){
                n = n + i;
            }
        }
        cout << n << endl;
    } 
    else{
        cout << "0" << endl;
    }

    
    
    return 0;
    
}