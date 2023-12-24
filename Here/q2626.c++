#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    string a, b, c;

    while(cin >> a >> b >> c){
        if(a == b && b == c){
            cout <<"Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
        else if(a == b && b != c){
            if((a == "tesoura" && c == "papel") || (a == "pedra" && c == "tesoura") || (a == "papel" && c == "pedra")){
                cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }   
            else{
                cout << "Urano perdeu algo muito precioso..." << endl;
            }
        }
        else if(a == c && b != c){
            if((a == "tesoura" && b == "papel") || (a == "pedra" && b == "tesoura") || (a == "papel" && b == "pedra")){
                cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }   
            else{
                cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
            }
        }
        else if(b == c && b != a){
            if((b == "tesoura" && a == "papel") || (b == "pedra" && a == "tesoura") || (b == "papel" && a == "pedra")){
                cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }   
            else{
                cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
            }
        }
        else{
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
    }

    return 0;
}