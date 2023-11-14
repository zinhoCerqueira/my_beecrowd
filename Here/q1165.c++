#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n, x;

    cin >> n;
    
    for(int i = 1; i <= n; i++){
        int soma = 0, cont = 0;
        cin >> x;
        
        for(int j = 1; j <= x; j++){
            if(x % j == 0 ){
                cont++;
            }
        }

        if(cont > 2){
            cout << x << " nao eh primo" << endl;
        }
        else{
            cout << x << " eh primo" << endl;
        }

        cont = 0;
    }
    return 0;
    
}