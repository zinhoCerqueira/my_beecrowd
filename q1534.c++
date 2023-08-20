#include <iostream>
#include <iomanip>
#include <list>

using namespace std;
 
int main() {

    int n;
    bool z = true;
    cin >> n;

    while(z){

        int m[n][n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i == j){
                    cout << 1;
                }
                else if(i == n - j - 1){
                    cout << 2;
                }
                else if(i != j && i != n - j - 1){
                    cout << 3;
                }
            }
            cout << endl;

        }

        if(cin >> n){

        }
        else{
            z = false;
        }
    }
    return 0;
    
}