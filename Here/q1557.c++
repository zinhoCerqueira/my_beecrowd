#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

 
using namespace std;
 
int main() {

    int n, valor = 1, digit = 0, tdigit;

    while(cin >> n && n != 0){
        
        valor = 1;
        int m[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == 0){
                     m[j][i] = valor;
                }
                else{
                    m[j][i] = m[j-1][i]*2;
                    tdigit = int(std::log10(m[j][i])) + 1;
                    if(tdigit > digit){
                        digit = tdigit;
                    }
                }
               

            }
            valor = valor * 2;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i== 0 && j == 0)
                    cout << setw(digit) << m[i][j];
                else if(j == 0)
                    cout << setw(digit) << m[i][j];
                else
                    cout << " " << setw(digit) << m[i][j];
            }   
            cout << endl;
        }
        cout << endl;
    }
    return 0;
    
}