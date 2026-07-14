#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main()
{

    int  mult = 1, rep = 0;
    float i = 0, j = 1;

    while (i < 2.1)
    {
        cout << "I=" << i << " J=" << j+i << endl;

        rep++;

        if (rep == 3)
        {
            rep = 0;
            i = i + 0.2;
        }

        j++;
        if (j == 4)
        {
            j = 1;
        }
        //  std::cin >> numero;
    }

    return 0;
}