#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

int main()
{

    int n;
    int x, y;
    int soma;
    string a, b, c, d;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        cin >> x >> y;

        soma = x + y;

        if(b == "PAR"){
            if(soma % 2 == 0){
                cout << a << endl;
            }
            else{
                cout << c << endl;
            }
        }
        else{
            if(soma % 2 == 1){
                cout << a << endl;
            }
            else{
                cout << c << endl;
            }
        }


    }
    return 0;
}