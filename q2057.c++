#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int a, b, c;

    cin >> a >> b >> c;

    a = a + b + c;

    if(a == 24){
        a = 0;
    }
    else if(a > 24 && a > 0){
        a = a - 24;
    }
    else if(a < 0){
        a = 24 + a;
    }

    cout << a << endl;
    return 0;
    
}