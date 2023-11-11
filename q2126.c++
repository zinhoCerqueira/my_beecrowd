#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    string a, b;
    int caso = 0, qtd = 0;

    while(cin >> b >> a){

        size_t pos = a.find(b);
        size_t ultimapos = pos;

        if(pos != string::npos){
            
            while(pos != string::npos){
                qtd++;
                ultimapos = pos;
                pos = a.find(b, pos + 1);
            }
            //ultimapos++;
            caso++;
            cout << "Caso #" << caso << ":" << endl;
            cout << "Qtd.Subsequencias: " << qtd << endl;
            cout <<  "Pos: " << ++ultimapos << endl;
            cout << endl;

            qtd = 0;
            --ultimapos;

        }
        else{
            caso++;
            cout << "Caso #" << caso << ":" << endl;
            cout << "Nao existe subsequencia" << endl;
            cout << endl;
        }
        
        

        

    }


    return 0;
    
}