#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {


    cout << fixed << setprecision(2);

    float i, j ,soma=0;

    for(i = 1, j = 1; i <= 39; i = i+2, j = j*2 ){
        soma = soma + (i/j);
    }

    cout << soma << endl;

    return 0;
    
}