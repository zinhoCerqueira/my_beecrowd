#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    
    double xf, yf, xi, yi, vi, r1, r2, a, b;
    double posf, posi;

    while (cin >> xf && cin >> yf && cin >> xi && cin >> yi && cin >> vi && cin >> r1 && cin >> r2){
        
        a = pow(xf - xi, 2);
        b = pow(yf - yi, 2);

        a = sqrt(a + b);
        
        

        if((r1 + r2) >= (a + 1.5*(vi)) ){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }

        posi = 0;
        posf = 0;
    }

    return 0;
}