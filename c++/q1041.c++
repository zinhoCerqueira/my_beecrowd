#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    float n1, n2;
    
    cin >> n1;
    cin >> n2;
  

    if(n1 > 0 && n2 > 0){
        cout << "Q1" << endl;
    }
    else if(n1 < 0 && n2 < 0){
        cout << "Q3" << endl;
    }
    else if(n1 > 0 && n2 < 0){
        cout << "Q4" << endl;
    }
    else if(n1 < 0 && n2 > 0){
        cout << "Q2" << endl;
    }
    else if(n1 == 0 && n2 == 0){
        cout << "Origem" << endl;
    }
    else if(n1 == 0 && n2 != 0){
        cout << "Eixo Y" << endl;
    }
    else if(n2 == 0 && n1 != 0){
        cout << "Eixo X" << endl;
    }
    

    
    
    
    
    return 0;
}