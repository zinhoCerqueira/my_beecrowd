#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    string a;
    while(cin >> a){
        cout << a.substr(3, 2) << "/" << a.substr(0, 2) << "/" << a.substr(6) << endl;
        cout << a.substr(6, 2) << "/" << a.substr(3, 2) << "/" << a.substr(0, 2) << endl;
        cout << a.substr(0, 2) << "-" << a.substr(3, 2) << "-" << a.substr(6) << endl;
    }

}
