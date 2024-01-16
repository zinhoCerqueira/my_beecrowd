#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){

    int vet[26];
    int contador = 97;

    for(int i = 0; i < 26; i++){
        vet[i] = contador;
        contador++;

    }

    for(int i = 0; i < 26; i++){
        cout << vet[i] << " e " << static_cast<char>(vet[i]) << endl; 

    }
    

    return 0;

}

