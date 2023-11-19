#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    int n, anterior, atual;
    bool ok = true, v1 = true, maior_anterior = false;

    cin >> n;

    cin >> anterior;
    cin >> atual;

    if(anterior > atual){
        maior_anterior = true;
    }

    if(anterior != atual){

        for(int i = 0; i < n - 2; i++){

            anterior = atual;
            cin >> atual;

            if(anterior != atual){
                if(maior_anterior){

                    if(anterior > atual && v1){
                        ok = false;
                        v1 = false;
                    }

                    maior_anterior = !maior_anterior;  
                }
                else if(!maior_anterior){

                    if(anterior < atual && v1){
                        ok = false;
                        v1 = false;
                    }

                    maior_anterior = !maior_anterior;  
                }
            }
            else{
                ok = false;
                v1 = false;
            }

            
        

        }

        if(ok){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    else{
        cout << 0 << endl;
    }
    

    return 0;
}