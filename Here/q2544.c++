#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    
    int n;

    while(cin >> n){
        if(n == 1){
            cout << 0 << endl;
        }else{
            cout << log2(n) << endl;
        }
    }

    return 0;
}