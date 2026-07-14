#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n, x, y;
    cin >> n >> x >> y;

    if(n >= x + y){
        cout << "Farei hoje!" << endl;
    }
    else{
        cout << "Deixa para amanha!" << endl;
    }

    

    return 0;
}