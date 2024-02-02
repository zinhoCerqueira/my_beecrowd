#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    int x, y, m;
    int a, b; 

    while(cin >> x >> y >> m){

        for(int i = 0; i < m; i++){
            cin >> a >> b;

            if((x >= a && y >= b) || (x >= b && y >= a)){
                cout << "Sim" << endl;
            }
            else{
                cout << "Nao" << endl;
            }
        }
        
    }

    return 0;
}


