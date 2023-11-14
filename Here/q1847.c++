#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if(b < a && c >= b){
        cout << ":)" << endl;
    }
    else if(b > a && b >= c){
        cout << ":(" << endl;
    }
    else if(b > a && b < c && c-b < b-a){
        cout << ":(" << endl;
    }
    else if(b > a && b < c && c-b >= b-a){
        cout << ":)" << endl;
    }
    else if(a > b && b > c && b-c < a-b){
        cout << ":)" << endl;
    }
    else if(a > b && b > c && b-c >= a-b){
        cout << ":(" << endl;
    }
    else if(a == b){
        if(b < c){
            cout << ":)" << endl;
        }
        else{
            cout << ":(" << endl;
        }
    }

    return 0;
    
}