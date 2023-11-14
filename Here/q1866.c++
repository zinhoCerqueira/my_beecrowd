#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

int main()
{

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}