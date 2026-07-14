#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    int n;
    float x, menor;
    
    while(cin >> n){
        menor = 9999.99;
        for(int i = 0; i < n; i++){
            cin >> x;
            if (x <= menor){
                menor = x;
            }
        }
        cout << menor << endl;
    }
}
