#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int a;
    string x, y;

    cin >> a;

    for(int i = 0; i<a; i++){
        cin >> x;
        cin >> y;

        if(x == y){
            cout << "Caso #" << i+1 << ": De novo!"<< endl;
        }
        else if(x == "tesoura" && y == "papel"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "papel" && y == "pedra"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "pedra" && y == "lagarto"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "lagarto" && y == "Spock"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "Spock" && y == "tesoura"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "tesoura" && y == "lagarto"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "lagarto" && y == "papel"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "papel" && y == "Spock"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "Spock" && y == "pedra"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else if(x == "pedra" && y == "tesoura"){
            cout << "Caso #" << i+1 << ": Bazinga!"<< endl;
        }
        else{
            cout << "Caso #" << i+1 << ": Raj trapaceou!"<< endl;
        }

    }

    return 0;
    
}