#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int a, b, c, x,y;
    cin >> a;

    for(int i = 0; i < a; i++){
        cin >> x >> y;
        cout << x+y << endl;
    }
    return 0;
    
}