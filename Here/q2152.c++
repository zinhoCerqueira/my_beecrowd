#include <iostream>
#include <iomanip>
#include <list>
#include <string>


using namespace std;

int main(){
    

    int x;
    int a, b, c;

    string r1, r2;

    cin >> x;

    for(int i = 0; i < x; i++){
        cin >> a >> b >> c;
        if( a < 10){
            r1 = "0" + to_string(a);
        }
        else{
            r1 = to_string(a);
        }

        if( b < 10){
            r2 = "0" + to_string(b);
        }
        else{
            r2 = to_string(b);
        }


        if(c == 1){
            cout << r1 << ":" << r2 << " - A porta abriu!" << endl;
        }
        else{
            cout << r1 << ":" << r2 << " - A porta fechou!" << endl;
        }

    }
    

    return 0;
}