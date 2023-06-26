#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
 
using namespace std;


 
int main() {
    
    float salario, novo;
    
    cin >> salario;

    cout << fixed << setprecision(2);

    
    if(salario <= 400){
        novo = salario + (salario*15/100);
        cout << "Novo salario: " << novo <<endl;
        cout << "Reajuste ganho: " << novo - salario << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if(salario > 400 && salario <= 800 ){
        novo = salario + (salario*12/100);
        cout << "Novo salario: " << novo <<endl;
        cout << "Reajuste ganho: " << novo - salario << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if(salario > 800 && salario <= 1200 ){
        novo = salario + (salario*10/100);
        cout << "Novo salario: " << novo <<endl;
        cout << "Reajuste ganho: " << novo - salario << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if(salario > 1200 && salario <= 2000 ){
        novo = salario + (salario*7/100);
        cout << "Novo salario: " << novo <<endl;
        cout << "Reajuste ganho: " << novo - salario << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else{
        novo = salario + (salario*4/100);
        cout << "Novo salario: " << novo <<endl;
        cout << "Reajuste ganho: " << novo - salario << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    
    
    
    
    
    
    
    return 0;
}