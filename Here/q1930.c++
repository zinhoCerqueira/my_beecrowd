 #include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {
    int a, b, maior;

    cin >> a >> b;

    maior = a;

    if(maior < b){
        maior = b;
        cout << maior << endl;
    }
    else if(maior > b){
        cout << a << endl;
    }
    else{
        cout << a << endl;
    }
    return 0;
    
}