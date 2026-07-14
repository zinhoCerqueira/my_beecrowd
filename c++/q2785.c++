#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>
#include <chrono>

using namespace std;

int f(int **mat, int tamanho, int i, int j, list<int> &valores, int andar, int soma){
    
    int a = 999999, b = 999999;
    for(int k = i; k <= j; k++){
        soma = soma + mat[andar][k];
        // cout << "Numero que esta sendo somado: -> "<< mat[andar][k] << endl;
    }

    
    if((tamanho - 1) == andar){
        // cout << "Soma = "<< soma  << " Andar = " << andar << endl;
        return soma;
    }
    else{
        if(i > 0){
            int aux_i = i - 1;
            int aux_andar = andar + 1;
            a = f(mat, tamanho, aux_i, j, valores, aux_andar, soma);
        }

        if(j < tamanho - 1){
            int aux_j = j + 1;
            b = f(mat, tamanho, i, ++j, valores, ++andar, soma);
        }

        // cout << "A = " << a << "B = " << b << endl;
        if(a <= b){
            return a;
        }
        else{
            return b;
        }
    }

    
}

int main(){
    
    int menor = 999999,  retorno;
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
            scanf("%d", &k);
            matriz[i][j] = k;
        }
    }
    

    for(int i = 0; i < n; i++){
        int soma = 0;
        // cout << "Coluna = " << i << endl;
        retorno = f(matriz, n, i, i, valores, andar, soma);

        if(retorno < menor ){
            menor = retorno;
        }
        
    }

    cout << menor << endl;

       


    return 0;
}
