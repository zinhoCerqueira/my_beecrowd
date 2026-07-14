#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    cout << fixed << setprecision(1);

    float x;
    for(int i=0; i < 100; i++){
        cin >> x;
        if(x <= 10){
            cout << "A[" << i << "] = " << x << endl;
        }
    }
    return 0;
    
}