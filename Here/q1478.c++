#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int x, elemento;
    cin >> x;
    int m[x][x];
    bool soma = true;

    while(x != 0){

        int m[x][x];

        for(int i = 0; i < x; i++){
            elemento = i + 1;
            for(int j = 0; j < x; j++){

                if(elemento == 1){
                    soma = true;
                }
                
                if(soma){
                    m[j][i] = elemento;
                    elemento++;
                }
                else{
                    m[j][i] = elemento;
                    elemento--;
                }

                    
                
            
            }
            soma = false;
        }

        for(int i = 0; i < x; i++){
            for(int j = 0; j < x; j++){
                if(j == x-1){
                    cout << m[i][j] << endl;
                }
                else{
                    cout << m[i][j] << " ";
                }
            }
        }

        cin >> x;
    }
    
}