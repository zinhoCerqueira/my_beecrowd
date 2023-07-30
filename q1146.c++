#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int x;
    cin >> x;

    while(x != 0){
        for(int i = 1; i <= x; i++){
            if(i == x){
                cout << i << endl;
            }
            else{
                cout << i << ' ';
            }
            
        }

        cin >> x;
    }
    return 0;
    
}