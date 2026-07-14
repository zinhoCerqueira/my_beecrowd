#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int n;
    int  centena = 0, dezena = 0, unidade = 0;

    string resposta;

    cin >> n;
    
    if(n >= 100){
        centena = n / 100;
        n = n - (centena * 100);
    }

    if(n >= 10){
        dezena = n / 10;
        n = n - (dezena * 10);
    }

    if(n >= 1){
        unidade = n / 1;
        n = n - (unidade * 1);
    }

    if(centena > 0){
        if (centena <= 3){
            for(int i = 0; i < centena; i++){
                resposta = resposta + "C";
            }
            
        }
        else if(centena == 4){
            resposta = resposta + "CD";
        }
        else if(centena > 4 && centena < 9){
            resposta = resposta + "D";
            centena = centena - 5;

            for(int i = 0; i < centena; i++){
                resposta = resposta + "C";
            }
        }
        else if(centena == 9){
            resposta = resposta + "CM";
        }
    }

    if(dezena > 0){
        if (dezena <= 3){
            for(int i = 0; i < dezena; i++){
                resposta = resposta + "X";
            }
            
        }
        else if(dezena == 4){
            resposta = resposta + "XL";
        }
        else if(dezena > 4 && dezena < 9){
            resposta = resposta + "L";
            dezena = dezena - 5;

            for(int i = 0; i < dezena; i++){
                resposta = resposta + "X";
            }
        }
        else{
            resposta = resposta + "XC";
        }
    }

    if(unidade > 0){
        if (unidade <= 3){
            for(int i = 0; i < unidade; i++){
                resposta = resposta + "I";
            }
            
        }
        else if(unidade == 4){
            resposta = resposta + "IV";
        }
        else if(unidade > 4 && unidade < 9){
            resposta = resposta + "V";
            unidade = unidade - 5;

            for(int i = 0; i < unidade; i++){
                resposta = resposta + "I";
            }

        }
        else{
            resposta = resposta + "IX";
        }
    }

    cout << resposta << endl;
        
    

    
    return 0;
    
}