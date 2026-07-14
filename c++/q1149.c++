#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int a, n, soma = 0;

    cin >> a >> n;

    while(n <= 0){
        cin >> n;
    }

    for(int i = 0; i <= n-1 ; i++){
        soma = soma + a + i;
    }

    cout << soma;


    return 0;
    
}