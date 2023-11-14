#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main()
{

    int a;
    cin >> a;
    for (int i = 0; i < 10; i++)
    {

        if (i == 0)
        {
            cout << "N[" << i << "] = " << a << endl;
        }
        else
        {
            a = a * 2;
            cout << "N[" << i << "] = " << a << endl;
        }
    }

    return 0;
}