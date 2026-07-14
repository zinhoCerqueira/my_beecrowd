#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main()
{

    int n, m, pokemon[2], pessoa[2], resp;
    int valor;

    while (cin >> n >> m)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> valor;

                if (valor == 2)
                {
                    pokemon[0] = i;
                    pokemon[1] = j;
                }
                else if (valor == 1)
                {
                    pessoa[0] = i;
                    pessoa[1] = j;
                }
            }
        }

        resp = abs(pokemon[0] - pessoa[0]) + abs(pokemon[1] - pessoa[1]);

        cout << resp << endl;
    }

    return 0;
}