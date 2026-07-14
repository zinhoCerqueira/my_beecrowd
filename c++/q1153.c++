#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;

int f(int a){
    if(a == 1){
        return 1;
    }
    else{
        return a * f(a - 1);
    }
}
 
int main() {

    int n, fat = 1;
    cin >> n;

    fat = f(n);

    cout << fat << endl;

    return 0;
    
}

