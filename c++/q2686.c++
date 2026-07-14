#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main()
{
    
    cout << fixed << setprecision(2);

    float n;
    while (cin >> n)
    {
        if (n >= 0 && n < 90)
        {
            cout << "Bom Dia!!" << endl;
        }
        else if (n >= 90 && n < 180)
        {
            cout << "Boa Tarde!!" << endl;
        }
        else if (n >= 180 && n < 270)
        {
            cout << "Boa Noite!!" << endl;
        }
        else if (n >= 270 && n < 360)
        {
            cout << "De Madrugada!!" << endl;
        }
        else
        {
            cout << "Bom Dia!!" << endl;
        }

        int segundosTotal = n * 240;
        int minutosTotal = segundosTotal / 60;

        int segundos = segundosTotal % 60;

        int horas = minutosTotal / 60;
        int minutos = minutosTotal % 60;

        if(horas + 6 < 10){
            cout << "0" << horas+6 <<":";
        }
        else if(horas + 6 >= 10 && horas + 6 < 24){
            cout << horas + 6 <<":";
        }
        else if(horas + 6 == 24){
            cout << "00:"; 
        }
        else if(horas + 6 > 24){
            cout << "0" << (horas+6)-24 << ":";
        }

        if(minutos < 10){
            cout << "0" << minutos <<":";
        }
        else{
            cout << minutos <<":";
        }

        if(segundos < 10){
            cout << "0" << segundos;
        }
        else{
            cout << segundos;
        }


        cout << endl; 
    }

    return 0;
}