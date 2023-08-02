#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int n, x, y;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        int cont = 0;
        int soma = 0;

        while(cont < y){
            
            if(x % 2 != 0){
                soma = soma + x;
                cont++;
            }

            x++;

        }

        cout << soma << endl;
    }
    return 0;
    
}