#include <iostream>
using namespace std;

int main(){


    string temp;
    int hora1, hora2, minuto1, minuto2, dia1, dia2, segundo1, segundo2;

    cin >> temp >> dia1;
    cin >> hora1 >> temp >> minuto1 >> temp >> segundo1;
    cin >> temp >> dia2;
    cin >> hora2 >> temp >> minuto2 >> temp >> segundo2;

    segundo1 = segundo2 - segundo1;
    minuto1 = minuto2 - minuto1;
    hora1 = hora2- hora1;
    dia1 = dia2 - dia1;

    if(segundo1 < 0){
        segundo1 += 60;
        minuto1--;
    }
    if(minuto1 < 0){
        minuto1 += 60;
        hora1--;
    }

    if(hora1 < 0){
        hora1 += 24;
        dia1--;
    }

    cout << dia1 << " dia(s)" << endl;
    cout << hora1 << " hora(s)" << endl;
    cout << minuto1 << " minuto(s)" << endl;
    cout << segundo1 << " segundo(s)" << endl;

    return 0;

}
