#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    cout << fixed << setprecision(2);


    float idade, soma = 0, qtd = 0;

    cin >> idade;

    while(idade > 0){
        soma = soma + idade;
        cin >> idade;
        qtd++;
    }

    float x = soma/qtd;

    cout << x << endl;

    return 0;
    
}