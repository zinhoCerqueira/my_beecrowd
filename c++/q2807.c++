#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    vector<int> v;
    int n;
    cin >> n;

    v.push_back(1);
    v.push_back(1);

    if(n == 1){
        cout << 1;
    }
    else{
        for(int i = 2; i < n; i++){
        int a = v[i - 1] + v[i - 2];
        v.push_back(a);
    }

        for(int i = v.size() - 1; i >= 0; i--){
            
            if(i == 0){
                cout << v[i];
            }
            else{
                cout << v[i] << " ";
            }
        }
    }

    

    cout << endl;



    return 0;
}
