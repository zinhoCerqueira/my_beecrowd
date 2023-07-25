#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int x;

    cin >> x;

    while(x != 2002){
        cout << "Senha Invalida" << endl;
        cin >> x;
    }

    cout << "Acesso Permitido" << endl;
    
}