#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>


using namespace std;

int main(){
    
    int n, a, b;
    int altura, cont = 0;

    while(cin >> n >> a >> b){
        for(int i = 0; i < n; i++){
            cin >> altura;
            if(altura >= a && altura <= b){
                cont++;
            }
            
        }
        cout << cont << endl;
        cont = 0;
    }

    return 0;
}