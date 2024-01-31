#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    vector<string> s;
    string a;

    for(int i = 0; i < 10; i++){
        cin >> a;
        s.push_back(a);
    }

    cout << s[2] << endl;
    cout << s[6] << endl;
    cout << s[8] << endl;
}
