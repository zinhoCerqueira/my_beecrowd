#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    string a, b;

    cin >> a;
    cin >> b;

    if(a < b){
        cout << a << endl;
        cout << b << endl;
    }
    else{
        cout << b << endl;
        cout << a << endl;
    }

    return 0;
}
