#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    int n;
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
    }

    return 0;
}