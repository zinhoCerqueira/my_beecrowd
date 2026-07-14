#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    int a1, a2, a3;
    int ideal;

    cin >> a1 >> a2 >> a3;

    int t1, t2, t3;

    t1 = (a2 * 2) + (a3 * 4);

    t2 = (a1 * 2) + (a3 * 2);

    t3 = (a2 * 2) + (a1 * 4);

    int menor = t1; 

    if(menor > t2){
        menor = t2;
    }

    if(menor > t3){
        menor = t3;
    }

    cout << menor << endl;
}