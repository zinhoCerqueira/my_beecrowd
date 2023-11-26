#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    double xf, yf, xi, yi, vi, r1, r2;
    double posf, posi;

    while (cin >> xf && cin >> yf && cin >> xi && cin >> yi && cin >> vi && cin >> r1 && cin >> r2){
        posf = xf + r1 + r2;
        posi = xi + (1.5 * vi);

        if(posf >= posi){
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