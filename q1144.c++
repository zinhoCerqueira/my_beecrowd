#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n;
    int guarda = 1;
    bool rpt = false;

    cin >> n;

    for(int i = 1; i <= n; i++){
        
        if(rpt == false){
            cout << i << ' ' << i*i << ' ' << i*i*i << endl;
            i--;
            rpt = true;
        }
        else{
            cout << i << ' ' << (i*i)+1 << ' ' << (i*i*i)+1  << endl;
            rpt = false;
        }
        

        
    }
    return 0;
    
}