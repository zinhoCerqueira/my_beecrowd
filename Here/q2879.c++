#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n, contador = 0, escolha;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> escolha;

        if(escolha != 1){
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}
