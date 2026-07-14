#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    int x;
    long long int y;

    cin >> x >> y; 

    while(x != 0 && y != 0){

        cout << x * y << endl;
 
        cin >> x >> y;
    }

    return 0;
}