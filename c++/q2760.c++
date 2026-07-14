#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main()
{

    string a, b, c;

    while (getline(cin, a), getline(cin, b), getline(cin, c))
    {
        cout << a << b << c << endl;
        cout << b << c << a << endl;
        cout << c << a << b << endl;

        if (a.length() >= 10)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << a[i];
            }
        }
        else
        {
            cout << a;
        }

        if (b.length() >= 10)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << b[i];
            }
        }
        else
        {
            cout << b;
        }

        if (c.length() >= 10)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << c[i];
            }
        }
        else
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
