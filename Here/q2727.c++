#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n, n_pontos = 0, repeticoes = 0;
    string s;

    while(cin >> n){
        cin.ignore();
        
        for(int i = 0; i < n; i++){
            getline(cin, s);

            int testSpace = 0;
            char space = s[testSpace];
            while(space != ' ' && testSpace <= s.length() - 1){
                n_pontos++;
                testSpace++;
                space = s[testSpace];
            }
        
            for (char c : s) {
                if (c == ' '){
                    repeticoes++;
                }
            }
            repeticoes++;

            // cout << n_pontos << " " << repeticoes << endl;

            cout << (char)('a' + (3 * (repeticoes - 1) + n_pontos - 1)) << endl;
            
            n_pontos = 0;
            repeticoes = 0;
        }
        
    }

    return 0;
}