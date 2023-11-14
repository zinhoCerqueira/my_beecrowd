#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
 
using namespace std;


 
int main() {
    
    float c1, c2, c3, c4, c5, c6;
    int posi = 0;

    cin >> c1;
    cin >> c2;
    cin >> c3;
    cin >> c4;
    cin >> c5;
    cin >> c6;

    if(c1 >= 1){
        posi ++;
    }
    if(c2 >= 1){
        posi ++;
    }
    if(c3 >= 1){
        posi ++;
    }
    if(c4 >= 1){
        posi ++;
    }
    if(c5 >= 1){
        posi ++;
    }
    if(c6 >= 1){
        posi ++;
    }

    cout << posi << " valores positivos" << endl;
    
    
    
    
    
    
    
    
    
    return 0;
}