#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    int t;
    cin >> t;

    int n, k, resto, conjunto;

    for(int i = 0; i < t; i++){
        cin >> n >> k;
        conjunto = n / k;
        resto = n % k;

        resto = resto + conjunto;
        cout << resto << endl;
    }
}
