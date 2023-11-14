#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int x, y, aux, soma = 0;

    cin >> x >> y;

    while(x != y){
        if (x > y){
            cout << "Decrescente" << endl;
        }
        else{
            cout << "Crescente" << endl;
        }

        cin >> x >> y;
    }
    
    return 0;
    
}