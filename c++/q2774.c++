#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>
#include <list>
#include <sstream>

using namespace std;

int main(){
    
    int h, m;
    string linha;
    list<double> numeros;
    
    cout << fixed << setprecision(5);

    while(cin >> h >> m){
        cin.ignore();
        cin.ignore();
        getline(cin, linha);
        istringstream iss(linha);

        double numero;
        double total = 0;
        
        while (iss >> numero) {
            numeros.push_back(numero);
            total = total + numero;
        }

        double media = total / (numeros.size());
        
        double somatorio = 0;
        double dif;
        for (const auto& n : numeros) {
            // cout << n << " ";
            dif = n - media;
            somatorio = somatorio + ( dif * dif );
        }

        somatorio = somatorio / ((numeros.size()) - 1);
        somatorio = sqrt(somatorio);
        cout << somatorio << endl;

        numeros.clear();
    }
    
    



}
