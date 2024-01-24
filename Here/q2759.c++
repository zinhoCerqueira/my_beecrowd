#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    
    char x, y, z;

    cin >> x >> y >> z;

    cout << "A = " << x << ", B = " << y << ", C = " << z << endl;
    cout << "A = " << y << ", B = " << z << ", C = " << x << endl;
    cout << "A = " << z << ", B = " << x << ", C = " << y << endl;

}
