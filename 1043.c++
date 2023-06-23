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
    float n1, n2, n3;
    cout << fixed << setprecision(1);

    
    cin >> n1;
    cin >> n2;
    cin >> n3;

    
        if(n1 + n2 > n3 && n1+n3 > n2 && n2+n3 > n1){
            cout << "Perimetro = " << n1+n2+n3 << endl;
            return 0;
        }
    

    cout << "Area = " << ((n1+n2)*n3)/2 << endl;
    return 0;
    
}