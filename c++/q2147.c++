#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
 
using namespace std;

 
int main() {
    
    string s;
    int b;
    cout << fixed << setprecision(2);

    cin >> b;

    for(int a = 0; a < b ; a++){
        cin >> s;

        double tamanho = s.length();
        cout << tamanho / 100 << endl;
    }
    
    
    
    return 0;
}