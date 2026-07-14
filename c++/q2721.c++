#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int soma = 0, v;

    for(int i = 0; i < 9; i++){
        cin >> v;
        soma = soma + v;
    }

    v = soma % 9;

    if(v == 0){
        v = 8;
    }
    else{
        v--;
    }

    if(v == 0){
        cout << "Dasher" << endl;
    }
    else if(v == 1){
        cout << "Dancer" << endl;
    }
    else if(v == 2){
        cout << "Prancer" << endl;
    }
    else if(v == 3){
        cout << "Vixen" << endl;
    }
    else if(v == 4){
        cout << "Comet" << endl;
    }
    else if(v == 5){
        cout << "Cupid" << endl;
    }
    else if(v == 6){
        cout << "Donner" << endl;
    }
    else if(v == 7){
        cout << "Blitzen" << endl;
    }
    else if(v == 8){
        cout << "Rudolph" << endl;
    }

    return 0;
}