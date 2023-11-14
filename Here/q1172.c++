#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int a;

    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a <= 0){
            a = 1;
            cout << "X[" << i << "] = "<< a << endl;
        }
        else{
            cout << "X[" << i << "] = "<< a << endl;
        }
    }

    return 0;
    
}