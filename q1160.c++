#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {

    int t;

    cin >> t;

    for(int i = 0; i < t ; i++){
        int pa, pb;
        float ga, gb;

        cin >> pa >> pb >> ga >> gb;

        int cont = 0;

        while(pa <= pb){
            cont++;
            int a = pa * (ga/100);
            pa = pa + a;

            if(gb != 0){
                int b = pb * (gb/100);
                pb = pb + b;
            }
            
        }
        
        if(cont > 100){
            cout << "Mais de 1 seculo." << endl;
        }
        else{
            cout << cont <<" anos." <<endl;
        }
        cont = 0;



    }
    return 0;
    
}