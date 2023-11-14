#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int n, m;
    string x;

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> x;

        if(x == "fechou"){
            n++;
        }
        else if(x == "clicou"){
            n--;
        }
    }

    cout << n << endl;

    return 0;
    
}