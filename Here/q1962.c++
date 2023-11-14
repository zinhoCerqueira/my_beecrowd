#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <cmath>

 
using namespace std;
 
int main() {

    int n, x;

    cin >> n;
    for(int i = 0; i < n; i++){
        
        cin >> x;
        if(x > 2015){
        x = abs(x - 2015) + 1;
        cout << x << " A.C." << endl;
        }
        else if(x < 2015){
            x = 2015 - x;
            cout << x << " D.C." << endl;
        }
        else{
            cout << "1 A.C." << endl;
        }

    }
    

    return 0;
    
}