#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
 
using namespace std;


 
int main() {
    int n1, n2, n3, n4, total, minuto;
    
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    
    if(n1 < n3){
        total = n3 - n1;

        if(n2 <= n4){
            minuto = n4 - n2;
        }
        else{
            total--;
            minuto = std::abs(n2 - 60);
            minuto = minuto + n4;
  
        }
    }
    else if(n1 > n3){
        total = std::abs(n1 - 24);
        total = total + n3;

        if(n2 < n4){
            minuto = std::abs(n2 - 60);
            minuto = minuto + n4;
            if (minuto > 60){
                minuto = minuto % 60;
            }
        }
        else if(n2 > n4){
            minuto = std::abs(n2 - 60);
            minuto = minuto + n4;
        }
        else{
            minuto = 0;
        }
    }
    else{
        if(n2 == n4){
            total = 24;
            minuto = 0;
        }
        else if(n2 < n4){
            total = 0;
            minuto = n4 - n2;
        }
        else{
            total = 23;
            minuto = std::abs(n2 - 60);
            minuto = minuto + n4;
        }
    }

    cout << "O JOGO DUROU " << total << " HORA(S)" << " E " << minuto << " MINUTO(S)"<<endl;
    
    
    
    
    
    
    return 0;
}