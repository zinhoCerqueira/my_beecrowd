#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    string s;
    string a;
    int i, entrada, saida, pessoas = 0, carros = 0;

    while(cin >> s && s != "ABEND"){
        cin >> i;

        if(s == "SALIDA"){
            pessoas = pessoas + i;
            carros++;
        }
        else if(s == "VUELTA"){
            pessoas = pessoas - i;
            carros--;
        }
    }

    cout << pessoas << endl;
    cout << carros << endl;

    return 0;
}