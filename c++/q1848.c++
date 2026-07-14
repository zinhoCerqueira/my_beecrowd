#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int n = 0, valor = 0;
    string s;

    while(n < 3) {
        getline(cin, s);

        if(s == "---"){
            valor = valor + 0;
        }
        else if(s == "--*"){
            valor = valor + 1;
        }
        else if(s == "-*-"){
            valor = valor + 2;
        }
        else if(s == "-**"){
            valor = valor + 3;
        }
        else if(s == "*--"){
            valor = valor + 4;
        }
        else if(s == "*-*"){
            valor = valor + 5;
        }
        else if(s == "**-"){
            valor = valor + 6;
        }
        else if(s == "***"){
            valor = valor + 7;
        }
        else if(s == "caw caw"){
            n++;
            cout << valor << endl;
            valor = 0;
        }

    }
    return 0;
    
}