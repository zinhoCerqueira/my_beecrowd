#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n, x;

    cin >> n;
    
    for(int i = 1; i <= n; i++){
        int soma = 0;
        cin >> x;
        
        for(int j = 1; j < x; j++){
            if(x % j == 0 ){
                soma = soma + j;
            }
        }

        if(soma == x){
            cout << x << " eh perfeito" << endl;
        } 
        else{
            cout << x << " nao eh perfeito" << endl;
        }
    }
    return 0;
    
}