#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>


using namespace std;

int main(){
    
    int n, m;

    while(cin >> n >> m){
        int mat[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] != 0){
                cout << 9;
            }
            else{
                int contador = 0;
                if(i == 0 && j == 0){
                    if(mat[0][1] != 0){
                        contador++;
                    }
                    if(mat[1][0] != 0){
                        contador++;
                    }
                }
                else if(i == 0 && j == m-1){
                    if(mat[0][m-2] != 0){
                        contador++;
                    }
                    if(mat[1][m-1] != 0){
                        contador++;
                    }
                }
                
                //--------------------------------------------//
                else if(i == n-1 && j == 0){
                    if(mat[n-2][0] != 0){
                        contador++;
                    }
                    if(mat[n-1][1] != 0){
                        contador++;
                    }
                }
                else if(i == n-1 && j == m-1){
                    if(mat[n-2][m-1] != 0){
                        contador++;
                    }
                    if(mat[n-1][m-2] != 0){
                        contador++;
                    }
                }
                //--------------------------------------------//
                else if(i == n-1){
                    if(mat[i][j-1] != 0){
                        contador++;
                    }
                    if(mat[i][j+1] != 0){
                        contador++;
                    }
                    if(mat[i-1][j] != 0){
                        contador++;
                    }
                }
                //--------------------------------------------//
                else if(j == 0){
                    if(mat[i-1][j] != 0){
                        contador++;
                    }
                    if(mat[i+1][j] != 0){
                        contador++;
                    }
                    if(mat[i][j+1] != 0){
                        contador++;
                    }
                }
                //--------------------------------------------//
                else if(j == m-1){
                    if(mat[i-1][j] != 0){
                        contador++;
                    }
                    if(mat[i+1][j] != 0){
                        contador++;
                    }
                    if(mat[i][j-1] != 0){
                        contador++;
                    }
                }
                //--------------------------------------------//
                else if(i == 0){
                    if(mat[i][j-1] != 0){
                        contador++;
                    }
                    if(mat[i][j+1] != 0){
                        contador++;
                    }
                    if(mat[i+1][j] != 0){
                        contador++;
                    }
                }
                else{
                    if(mat[i-1][j] != 0){
                        contador++;
                    }
                    if(mat[i+1][j] != 0){
                        contador++;
                    }
                    if(mat[i][j+1] != 0){
                        contador++;
                    }
                    if(mat[i][j-1] != 0){
                        contador++;
                    }
                }

                cout << contador;
                contador = 0;
            }
            
        }
        cout << endl;
    }


    
    }
    

    return 0;
}