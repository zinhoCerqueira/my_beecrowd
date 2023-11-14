#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    cout << fixed << setprecision(1);

    int v[20];
    int cont = 0;

    for(int i =0; i < 20; i++){
        cin >> v[i];
    }

    for(int i = 19; i >= 0; i--){
        cout << "N[" << cont << "] = " << v[i] << endl;
        cont++;
    }
    

    return 0;
    
}