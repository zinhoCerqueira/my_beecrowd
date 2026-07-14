#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n;
    
    cin >> n;

    for(int i = 1; i <=10; i++){
        cout << i <<" x " << n << " = " << n*i << endl;
    }
    
    return 0;
    
}