#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int a, contador = 0;

    for(int i = 1; i <= 4; i++){
        cin >> a;
        if(a == 1){
            cout << i << endl;
        }
    }

    return 0;
}
