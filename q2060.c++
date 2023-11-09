#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

int main()
{

    int n, x, dois = 0, tres = 0, quatro = 0, cinco = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x % 2 == 0)
        {
            dois++;
        }
        if (x % 3 == 0)
        {
            tres++;
        }
        if (x % 4 == 0)
        {
            quatro++;
        }
        if (x % 5 == 0)
        {
            cinco++;
        }
    }

    cout << dois << " Multiplo(s) de 2" << endl;
    cout << tres << " Multiplo(s) de 3" << endl;
    cout << quatro << " Multiplo(s) de 4" << endl;
    cout << cinco << " Multiplo(s) de 5" << endl;

    return 0;
}