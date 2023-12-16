#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    int n;
    int m, l;
    int cm, cl;
    int atributo;

    while(cin >> n){
        cin >> m >> l;

        int matM[m][n], matL[l][n];

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> matM[i][j];
            }
        }

        for(int i = 0; i < l; i++){
            for(int j = 0; j < n; j++){
                cin >> matL[i][j];
            }
        }

        cin >> cm >> cl;
        cin >> atributo;

        if(matM[cm-1][atributo-1] > matL[cl-1][atributo-1]){
            cout << "Marcos" << endl;
        }
        else if(matM[cm-1][atributo-1] < matL[cl-1][atributo-1]){
            cout << "Leonardo" << endl;
        }
        else{
            cout << "Empate" << endl;
        }
    }
    
    

    

    return 0;
}