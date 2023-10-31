#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <cmath>

 
using namespace std;
 
int main() {

    int p, n;
    int x, y;
    cin >> p >> n;

    cin >> x;

    for(int i = 0; i < n - 1; i++){
        cin >> y;        
        if(abs(x - y) > p){
            cout << "GAME OVER" << endl;
            return 0;
        }

        x = y;
        
    }

    cout << "YOU WIN" << endl;

    return 0;
    
}