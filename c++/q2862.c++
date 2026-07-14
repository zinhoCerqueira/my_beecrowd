#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    int n, x;

    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x > 8000){
                cout << "Mais de 8000!" << endl;
            }
            else{
                cout << "Inseto!" << endl;
            }
        }
        
    }

    return 0;
}
