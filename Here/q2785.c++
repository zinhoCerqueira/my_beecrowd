#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int f(int **mat, int tamanho, int i, int j, list<int> &valores, int andar, int soma){
    

    for(int k = i; k <= j; k++){
        soma = soma + mat[andar][k];
    }

    cout << "Soma = "<< soma  << " Andar = " << andar << endl;

    if((tamanho - 1) == andar){
        valores.push_back(soma);
        cout << "OI" << endl;
    }

    if(i > 0){
        f(mat, tamanho, --i, j, valores, ++andar, soma);
    }

    if(j < tamanho - 1){
        f(mat, tamanho, i, ++j, valores, ++andar, soma);
    }


    // for (int i = 0; i < tamanho; i++) {
    //     for (int j = 0; j < tamanho; j++) {
    //         cout << mat[i][j] << " "; // Acessa o elemento na posição (i, j) da matriz
    //     }
    //     cout << endl; // Quebra de linha após imprimir uma linha completa
    // }

    return soma;
    
}

int main(){
    
    
    int n, andar = 0;
    list<int> valores;
    cin >> n;

    int **matriz;
    matriz = (int**)malloc(n*sizeof(int*));

    for(int i = 0; i < n; i++){
        matriz[i] = (int*)malloc(n*sizeof(int));
    }

    for(int i = 0, k; i < n; i++){
        for(int j = 0, k; j < n; j++){
            cin >> k;
            matriz[i][j] = k;
        }
    }

    for(int i = 0; i < n; i++){
        int soma = 0;
        cout << "Linha = " << i << endl;
        f(matriz, n, i, i, valores, andar, soma);
        
    }

    for(auto it = valores.begin(); it != valores.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
