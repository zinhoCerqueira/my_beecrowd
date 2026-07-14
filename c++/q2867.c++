#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int contarDigitos(long long numero) {
    return (int)log10(numero) + 1;
}

int main(){
    cout << fixed << setprecision(0);

    int n, a, b;
    
    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            
            double digits = b*log10(a)+1;

            cout << digits << endl;
            
            

        }
    }
    return 0;
}
