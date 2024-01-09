#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n, contagem = 0;
    string s;

    while(cin >> n){
        cin.ignore();
        for(int i = 0; i < n; i++){
            getline(cin, s);
        
            for (char c : s) {
                if (c == '.'){
                    contagem++;
                }
            }

            char letra = 'a' + contagem-1;
            cout << letra << endl;
            contagem = 0;
        }
        
    }

    return 0;
}