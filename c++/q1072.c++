#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {
 
    int in = 0, out = 0, qtd, x;

    cin >> qtd;

    for (int i = 0; i < qtd; i++) {
        cin >> x;
        if(x >= 10 && x <= 20){
            in++;
        }
        else{
            out++;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    
    
    return 0;
    
}