#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    int a, b, c;
    cin >> a >> b >> c;
    bool x = false; 

    if(a == b){
        x = true;
    }
    if(a == c){
        x = true;
    }
    if(b == c){
        x = true;
    }
    if(a + b == c){
        x = true;
    }
    if(a + c == b){
        x = true;
    }
    if(c + b == a){
        x = true;
    }

    if(x){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;
}