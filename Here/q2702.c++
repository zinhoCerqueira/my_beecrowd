#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int frango, bife, massa;
    int frango1, bife1, massa1;

    cin >> frango >> bife >> massa;
    cin >> frango1 >> bife1 >> massa1;

    int resp = 0;

    if(frango1 > frango){
        resp = resp + (frango1 - frango);
    }

    if(bife1 > bife){
        resp = resp + (bife1 - bife);
    }

    if(massa1 > massa){
        resp = resp + (massa1 - massa);
    }

    cout << resp << endl;

    return 0;
}