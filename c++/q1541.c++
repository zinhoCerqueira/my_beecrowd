#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

 
using namespace std;
 
int main() {

    int a, b, c;

    while(cin >> a && a != 0){
        cin >> b >> c;

        int tam = a * b;
        tam = tam*100;
        int x = tam/c;

        tam = sqrt(x);

        cout << tam << endl;
    }
    return 0;
    
}