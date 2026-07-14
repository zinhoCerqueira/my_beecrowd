#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

int main()
{

    int n;
    int forca;
    string nome;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nome >> forca;
        if (nome == "Thor")
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}