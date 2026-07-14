#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    int l, c;
    cin >> l >> c;

    if((l + c) % 2 == 0){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}
