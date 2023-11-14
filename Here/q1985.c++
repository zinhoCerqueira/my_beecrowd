#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int n;
    cin >> n;

    int pedido, qtd;
    double total = 0;

        cout << fixed << setprecision(2);


    for(int i = 0; i < n; i ++){
        cin >> pedido >> qtd;

        if(pedido == 1001){
            total = total + (1.50 * qtd);
        }
        else if(pedido == 1002){
            total = total + (2.50 * qtd);
        }
        else if(pedido == 1003){
            total = total + (3.50 * qtd);
        }
        else if(pedido == 1004){
            total = total + (4.50 * qtd);
        }
        else if(pedido == 1005){
            total = total + (5.50 * qtd);
        }
    }

    cout << total << endl;
    return 0;
    
}