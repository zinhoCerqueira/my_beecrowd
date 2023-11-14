#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {
    
    int n1, n2, n3, n4, n5, qtd = 0;

    
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;

    if(n1 % 2 == 0){
        qtd++;
    }
    if(n2 % 2 == 0){
        qtd++;
    }
    if(n3 % 2 == 0){
        qtd++;
    }
    if(n4 % 2 == 0){
        qtd++;
    }
    if(n5 % 2 == 0){
        qtd++;
    }
    
    cout << qtd << " valores pares" << endl;

    return 0;
    
}