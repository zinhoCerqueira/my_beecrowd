#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int x, y;

    cin >> x >> y;

    for(int i = 1; i <= y; i++){
        if(i%x == 0){
            cout << i << endl;
        }
        else{
            cout << i << ' ';
        }
    }
    return 0;
    
}