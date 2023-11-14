#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    cout << fixed << setprecision(2);

    float soma = 0.0;

    for(float i = 1; i <= 100; i++){
        soma = soma + (1/i);
    }

    cout << soma << endl;

    return 0;
    
}