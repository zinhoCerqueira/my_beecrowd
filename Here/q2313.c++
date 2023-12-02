#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int a, b, c;
    bool ret = false;

    cin >> a >> b >> c;
    if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a)){
        ret = true;
    }

    if( a + b > c && b + c > a && c + a > b){
        if(a == b && b == c){
            cout << "Valido-Equilatero" << endl;
        }
        else if((a == b && b != c) || (a == c && c != b) || (b == c && c != a)){
            cout << "Valido-Isoceles" << endl;
        }
        else{
            cout << "Valido-Escaleno" << endl;
        }

        if(ret){
            cout << "Retangulo: S" << endl;
        }
        else{
            cout << "Retangulo: N" << endl;
        }
    }
    else{
        cout << "Invalido" << endl;
    }

    return 0;
}