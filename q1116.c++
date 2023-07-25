#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    float x, y;
    int n;
    cout << fixed << setprecision(1);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(y != 0.0){
            cout << x / y << endl;
        }
        else{
            cout << "divisao impossivel" << endl;
        }
        
    }

    return 0;
    
}