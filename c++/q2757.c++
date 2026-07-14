#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    // cout << fixed << setprecision(1);

    int a, b, c;
    cin >> a >> b >> c;

    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    cout << "A = " << setw(10) << a << ", B = " << setw(10) << b << ", C = " << setw(10) << c << endl;
    if(a < 0){
        
        cout << "A = -";
        cout << setw(9) << std::setfill('0') << abs(a) << ", B = " << setw(10) << std::setfill('0') << b << ", C = " << setw(10) << std::setfill('0') << c << endl;
    }
    else{
        cout << "A = " << setw(10) << std::setfill('0') << a << ", B = " << setw(10) << std::setfill('0') << b << ", C = " << setw(10) << std::setfill('0') << c << endl;
    }
    // cout << "A = " << setw(10) << std::setfill('0') << a << ", B = " << setw(10) << std::setfill('0') << b << ", C = " << setw(10) << std::setfill('0') << c << endl;
    cout << "A = " << setw(10) << setiosflags(ios::left) << std::setfill(' ') << a << ", B = " << setw(10) << setiosflags(ios::left) << b << ", C = " << setw(10) << setiosflags(ios::left) << c << endl;


    return 0;
}
