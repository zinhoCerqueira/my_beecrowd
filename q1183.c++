#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    cout << fixed << setprecision(1);

    char x;
    double m[12][12];
    double res = 0, cont = 0;

    cin >> x;

    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            cin >> m[i][j];

            if(j > i){
                res = res + m[i][j];
                cont++;
            }

        }
    }

    if(x == 'S'){
        cout << res << endl;
    }
    else{
        res  = res / cont;
        cout << res << endl;
    }

    
    


    return 0;
    
}