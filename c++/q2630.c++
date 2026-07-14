#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){

    cout << fixed << setprecision(0);

    int n, r,g,b, aux;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        cin >> r >> g >> b;

        if(s == "eye"){
            cout << "Caso #" << i+1 << ": " ;
            cout << floor((0.30 * r ) + (0.59 * g) + (b * 0.11)) << endl;
        }
        else if(s == "mean"){
            cout << "Caso #" << i+1 << ": " ;
            cout << (r + g + b) / 3 << endl;
        }
        else if(s == "min"){
            cout << "Caso #" << i+1 << ": " ;
            aux = r;

            if(g < aux){
                aux = g;
            }

            if(b < aux){
                aux = b;
            }
            cout << aux << endl;
        }
        else if(s == "max"){
            cout << "Caso #" << i+1 << ": " ;
            aux = r;

            if(g > aux){
                aux = g;
            }

            if(b > aux){
                aux = b;
            }
            cout << aux << endl;
        }
    }

    return 0;
}