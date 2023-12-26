#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    int n, q, contador = 0, tamanho = 0;
    list<string> lista;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        lista.push_back(s);
    }

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> s;

        for (std::list<string>::iterator iterador = lista.begin(); iterador != lista.end(); ++iterador) {

            if((*iterador).compare(0, s.length(), s) == 0){
                // cout << (*iterador) << "  -  " << s << endl;
                contador++;
                // cout << (*iterador).size() << endl;
                if((*iterador).size() > tamanho){
                    tamanho = (*iterador).size();
                } 
            }
        }

        if(contador != 0){
            cout << contador << " " << tamanho << endl;
        }
        else{
            cout << -1 << endl;
        }
        contador = 0;
        tamanho = 0;
    }

    return 0;
}