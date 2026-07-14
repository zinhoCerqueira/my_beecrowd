#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

// Função para verificar se um número é um quadrado perfeito
bool isPerfectSquare(long long int n) {
    long long int sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

// Função para verificar se um número não está na sequência de Fibonacci
bool notInFibonacci(long long int n) {
    return !isPerfectSquare(5 * n * n + 4) && !isPerfectSquare(5 * n * n - 4);
}

int main(){
    cout << fixed << setprecision(1);
    vector<long long int> fibo;

    long long int n, cont = 2;
    cin >> n;

    while(fibo.size() < n){
        if(notInFibonacci(cont)){
            fibo.push_back(cont);
            // cout << cont << " ";
        }
        cont++;
    }

    cout << fibo[n - 1] << endl;

    

    return 0;
}
