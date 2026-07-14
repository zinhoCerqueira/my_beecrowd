#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int n;
    cin >> n;
    string  s = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    for(int i = 1; i <= n; i++){
        cout << s[i-1];
    }
    cout << endl;
    return 0;
    
}