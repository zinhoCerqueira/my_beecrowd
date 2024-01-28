#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    string s;
    cin >> s;

    cout << s.substr(0, 3) << endl;
    cout << s.substr(4, 3) << endl;
    cout << s.substr(8, 3) << endl;
    cout << s.substr(12) << endl;

}
