#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    int x, y, anterior, local;
    bool ok = true;

    cin >> x;
    cin >> y;

    for(int i = 0; i < x-1; i++){
        anterior = y;
        cin >> y;
        

        if(y < anterior){
            cout << i+2 << endl;
            ok = false;
            break;
        }


    }

    if(ok){
        cout << 0 << endl;
    }
    

    return 0;
}