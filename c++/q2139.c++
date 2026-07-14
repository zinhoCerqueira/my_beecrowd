#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int a, b, dias;

    while(cin >> a >> b){
        if(a == 12 && b == 25){
            cout << "E natal!" << endl;
        }
        else if(a == 12 && b == 24){
            cout << "E vespera de natal!" << endl;
        }
        else if(a == 12 && b > 25){
            cout << "Ja passou!" << endl;
        }
        else if(a == 12 && b < 24){
            cout << "Faltam " << 25 - b << " dias para o natal!" << endl;
        }
        else{
            dias = ((((12 - a) * 30) - b) + 25);
            cout << "Faltam " << dias << " dias para o natal!" << endl;
        }
    }
    
    return 0;
    
}