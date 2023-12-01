#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    int n;
    cin >> n;

    string nome;
    double mult, total = 0, nota;
    double maior, menor;

    for(int i = 0; i < n ; i++){
        cin >> nome;
        cin >> mult;

        cin >> nota;
        total = total + nota;
        maior = nota;
        menor = nota;
        for(int j = 0; j < 7-1; j++){
            cin >> nota;
            if(nota > maior){
                maior = nota;
            }
            if(nota < menor){
                menor = nota;
            }
            total = total + nota;
        }
        total = total - menor;
        total = total - maior;

        cout << nome << " " << (total * mult) << endl;
        total = 0;

    }

    return 0;
}