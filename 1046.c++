#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
 
using namespace std;

 
int main() {
    
    int n1, n2, total;
    
    cin >> n1;
    cin >> n2;
    
    if(n1 > n2){
        total = std::abs(n1 - 24);
        total = total + n2;
    }
    else if(n1 == 0 && n2 == 0){
        total = 24;
    }
    else{
        total = n2 - n1;
    }

    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;
    
    
    
    return 0;
}