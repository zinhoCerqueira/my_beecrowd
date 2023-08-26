#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    double x;

    cin >> x;

    for(int i=0; i<x; i++){
        if(i == x-1){
            cout << "Ho";
        }
        else{
            cout << "Ho ";
        }
        
    }
    cout << "!" << endl;
    return 0;
    
}