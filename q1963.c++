#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    double a , b, c, x;
    
    cout << fixed << setprecision(2);
    cin >> a >> b;
    c = b - a;

    x = 100*c/a;

    cout << x << "%" << endl;


    return 0;
    
}