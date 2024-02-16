#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main(){
    int ncasos, nporcaso, a;
    cin >> ncasos;

    for(int i = 0; i < ncasos; i++){

        cin >> nporcaso;
        vector<int> v;

        for(int i = 0; i < nporcaso; i++){

            cin >> a;
            if(a % 2 != 0){
                auto iter = lower_bound(v.begin(), v.end(), a);
                v.insert(iter, a);
            }  

        }
        
        int inicio = 0;
        int fim = v.size() - 1;

        while(fim >= inicio){
            cout << v[fim--] << " ";
            if(inicio <= fim){
                cout << v[inicio++] << " ";
            }

        }
        
    }

    return 0;
}
