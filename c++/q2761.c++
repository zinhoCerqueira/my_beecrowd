#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    
    int a;
    float b;
    char c;
    string d;


    while(cin >> a >> b >> c){
        getline(cin, d);
        d = d.substr(1);
        cout << fixed << setprecision(6);

        cout << a << b << c << d << endl;
        cout << a << "\t" << b << "\t"<< c << "\t" << d << endl;
        cout << setw(10) << a << setw(10) << b << setw(10) << c << setw(10) << d << endl;
    }
    

    return 0;
}
