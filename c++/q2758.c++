#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    
    
    float a, b;
    double c, d;

    cin >> a >> b;
    cin >> c >> d;

    cout << fixed << setprecision(6);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;

    cout << fixed << setprecision(1);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;

    cout << fixed << setprecision(2);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;

    cout << fixed << setprecision(3);
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << c << ", D = " << d << endl;

    cout << "A = " << scientific << uppercase << setprecision(3) << a << ", B = " << scientific << uppercase << setprecision(3) << b << endl;
    cout << "C = " << scientific << uppercase << setprecision(3) << c << ", D = " << scientific << uppercase << setprecision(3) << d << endl;
    
    cout << "A = " << setprecision(0) << fixed << a << ", B = " << setprecision(0) << fixed << b << endl;
    cout << "C = " << setprecision(0) << fixed << c << ", D = " << setprecision(0) << fixed << d << endl;

    return 0;
}
