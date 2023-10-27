 #include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <cmath>
 
using namespace std;
 
int main() {

    long double a, b;
    string sinal, primeiroDigito;
    int qtdZero = 0;
    bool segundoZero = false;

    cin >> a;

    if(a > 0){
        sinal = "+";
    }
    else{
        sinal = "-";
    }

    std::stringstream ss;
    ss << a;
    std::string numeroString = ss.str();



    if(primeiroDigito == "0"){
        for(int i = 0; i < numeroString.size(); i++){
            if((numeroString[i] == '0' && !segundoZero) || numeroString[i] == '.'){
                if(!numeroString[i] == '.'){
                    qtdZero++;
                }
            }
            else{
                segundoZero = true;
            }
        }

        b = a * pow(10.0, static_cast<double>(qtdZero));

        long double valor  = stold(primeiroDigito);
        long double xx = a - valor;

        a = b;
    }

    primeiroDigito =  numeroString[0];

    cout << numeroString[0];



    cout << sinal << primeiroDigito << ".";

    return 0;
    
}