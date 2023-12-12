#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    cout << fixed << setprecision(4);
    int m, nota, carga;
    double soma1 = 0, soma2 = 0;

    while(cin >> m){
        cin.ignore();
        for(int i = 0; i < m; i++){
            cin >> nota >> carga;
            soma1 = soma1 + (nota*carga);
            soma2 = soma2 + carga*100;
        }
        cout << soma1/soma2 << endl;
    }

    
    

    

    return 0;
}