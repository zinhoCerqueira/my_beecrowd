#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main()
{

    int x;
    char l;
    double m[12][12], res = 0;

    cout << fixed << setprecision(1);

    cin >> x >> l;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    if (l == 'S')
    {
        for (int i = 0; i < 12; i++)
        {
            res = res + m[x][i];
        }
    }
    else
    {
        for (int i = 0; i < 12; i++)
        {
            res = res + m[i][x];
        }
        res = res / 12;
    }

    cout << res << endl;

    return 0;
}