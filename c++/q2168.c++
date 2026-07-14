#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n, contador = 0, cont = 0;
    cin >> n;

    int mat[n+1][n+1];

    for(int i = 0; i < n+1; i++ ){
        for(int j = 0; j < n+1; j++){
            
            cin >> mat[i][j];

        }   
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

        
            if(mat[i][j] == 1){
                contador++;
            }
            if(mat[i][j+1] == 1){
                contador++;
            }
            if(mat[i+1][j] == 1){
                contador++;
            }
            if(mat[i+1][j+1] == 1){
                contador++;
            }

            if(contador >= 2){
                cout << "S";
            }
            else{
                cout << "U";
            }
            contador = 0;

        }
        cout << endl;

    }
    return 0;
}