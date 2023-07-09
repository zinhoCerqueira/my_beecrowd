#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
 
using namespace std;


 
int main() {

    

    
    int n1, n2, n3, n4, n5, n6, qtd = 0, total = 0;
    float res;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;
    cin >> n6;

    if (n1 >= 0){
        qtd++;
        total = total + n1;
    }

    if (n2 >= 0){
        qtd++;
        total = total + n2;
    } 

    if (n3 >= 0){
        qtd++;
        total = total + n3;
    } 

    if (n4 >= 0){
        qtd++;
        total = total + n4;
    } 

    if (n5 >= 0){
        qtd++;
        total = total + n5;
    } 

    if (n6 >= 0){
        qtd++;
        total = total + n6;
    } 

    
    res = total/qtd;
    cout << qtd << " valores positivos" << endl;
    cout << res;
    
    
    
    
    
    return 0;
}