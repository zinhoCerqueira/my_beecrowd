#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <vector>

using namespace std;

int main()
{

    int n, n_perigoso, n_testes;
    string s;
    vector<string> perigo;

    cin >> n;

    for(int z = 0; z < n; z++)
    {
        cin >> n_perigoso;

        for (int i = 0; i < n_perigoso; i++)
        {
            cin >> s;
            perigo.push_back(s);
        }

        cin >> n_testes;
        for (int i = 0; i < n_testes; i++)
        {
            cin >> s;
            bool ok = false;

            for (int k = 0; k < perigo.size(); k++)
            {

                size_t found = s.find(perigo[k]);

                if (found != string::npos)
                {

                    if (s == perigo[k])
                    {
                        ok = true;
                    }
                    else
                    {
                        if ((s[found + perigo[k].size()] == 'e') || (s[found + perigo[k].size()] == '1') || (s[found + perigo[k].size()] == '2') || (s[found + perigo[k].size()] == '3') || (s[found + perigo[k].size()] == '4') || (s[found + perigo[k].size()] == '5') || (s[found + perigo[k].size()] == '6') || (s[found + perigo[k].size()] == '7') || (s[found + perigo[k].size()] == '8') || (s[found + perigo[k].size()] == '9') || (s[found + perigo[k].size()] == '0') || (s[found + perigo[k].size()] == 'e') || (s[found + perigo[k].size()] == 'l'))
                        {
                            ok = false;
                        }
                        else
                        {
                            ok = true;
                        }
                    }
                }
            }

            if (!ok)
            {
                cout << "Prossiga" << endl;
            }
            else
            {
                cout << "Abortar" << endl;
            }
        }
        cout << "" <<endl;
        perigo.clear();
        
    }

    return 0;
}