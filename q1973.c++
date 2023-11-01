#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <list>
#include <set>
 
using namespace std;
 
int main() {

    long long int n, local = 0, i, total = 0;
    set<long long int> qtd;

    scanf("%lld", &n);;

    long long int c[n];

    for(long long int i = 0; i < n; i ++){
        scanf("%lld", &c[i]);
        total = total + c[i];
    }

    while(local >= 0 && local < n){

        if(c[local] % 2 == 0){
            if(c[local] != 0){
                c[local]--;
                qtd.insert(local);
                local--;
                total--;
            }

            if(c[local]== 0){
                local--;
            }
           
        }
        else{
            if(c[local] != 0){
                c[local]--;
                qtd.insert(local);
                local++;
                total--;
            }
        }
    }

    cout << qtd.size() << " " << total << endl;

    

    return 0;
    
}