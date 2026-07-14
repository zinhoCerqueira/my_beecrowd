#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <cstdio>


using namespace std;

int main(){
    
    double n, favor = 0, contra = 0, voto;
    double tolerance = 1e-9;
    
    while(cin >> n){
        for(int i = 0; i < n; i++){
            scanf("%lf", &voto);
            if(voto == 1){
                favor++;
            }
            else{
                contra++;
            }
        }

        if(favor >= n*0.666 ){
            // cout << favor << " --- " << (2.0/3.0)*n << endl; 
            cout << "impeachment" << endl;
        }
        else{
            cout << "acusacao arquivada" << endl;
        }

        favor = 0;

    }

    

    

    return 0;
}