#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    int n, x, anterior, posterior, dif, difatual, contador = 1, contadordif = 1;
    cin >> n;
    vector<int> v;

    for(int i = 0; i < n ; i++){
        cin >> x;
        v.push_back(x);
    }

    for(int i = 2; i < n ; i++){
        if((v[i] - v[i-1]) != (v[i-1] - v[i-2])){
            contador ++;
        } 
    }

    cout << contador << endl;
}

