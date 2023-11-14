#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    cout << fixed << setprecision(4);

    double x;
    cin >> x;


    for(int i = 0; i < 100; i++){
        cout << "N[" << i << "] = " << x << endl;
        x = x/2;
    }
    return 0;
    
}