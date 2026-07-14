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
    int n, m;

    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m;
        if(m > 0){
            if(m % 2 == 0){
                cout << "EVEN POSITIVE" << endl;
            }
            else{
                cout << "ODD POSITIVE" << endl;
            }
        }
        else if(m < 0){
            if(m % 2 == 0){
                cout << "EVEN NEGATIVE" << endl;
            }
            else{
                cout << "ODD NEGATIVE" << endl;
            }
        }
        else{
            cout << "NULL" << endl;
        }
    }
    
    return 0;
    
}