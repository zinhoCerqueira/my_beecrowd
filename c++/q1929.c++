#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int a, b, c, d, aux;
    int maior, menor;

    cin >> a >> b >> c >> d;

    //ABC
    if((a + b > c) && (a + c > b) && (b + c > a)){
        cout << "S" << endl;
        return 0;
    }

    //ABD
    if((a + b > d) && (a + d > b) && (b + d > a)){
        cout << "S" << endl;
        return 0;
    }

    //BCD
    if((b + c > d) && (b + d > c) && (c + d > b)){
        cout << "S" << endl;
        return 0;
    }
    //ACD
    if((a + c > d) && (a + d > c) && (c + d > a)){
        cout << "S" << endl;
        return 0;
    }

    cout << "N" << endl;
    return 0;
    
}