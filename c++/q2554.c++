#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <sstream>
#include <string>

using namespace std;

int main()
{

    int n, d;
    string data;
    bool confirm = true, one = true, v = true;;

    while (cin >> n >> d)
    {

        string amigos[n];

        v = true;
        one = true;
        for (int i = 0; i < d; i++)
        {
            cin >> data;
            confirm = true;
            
            for (int j = 0; j < n; j++)
            {
                cin >> amigos[j];
                if (amigos[j] == "0" && confirm)
                {
                    confirm = false;
                }
               
                
            }
            if(confirm && one){
                confirm = false;
                cout << data << endl;
                one = false;
                v = false;
            }
        }

        if(v){
            cout << "Pizza antes de FdI" << endl;
        }
        
        
    }

    return 0;
}