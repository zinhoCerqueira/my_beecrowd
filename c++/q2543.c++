#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    int n, id;
    int idd, jogo, cont = 0;

    while(cin >> n >> id){
        
        for(int i = 0; i < n ; i++){
            cin >> idd >> jogo;

            if(id == idd && jogo == 0){
                cont++;
            }
        }

        cout << cont << endl;
        cont = 0;
        
    }


    return 0;
}