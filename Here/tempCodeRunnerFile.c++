#include <iostream>
#include <iomanip>
#include <list>
#include <queue>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n, q;
    priority_queue <int>lista;
    int a;

    cin >> n >> q;

    for(int i = 0; i < n; i++){
        cin >> a;
        lista.push(a);

    }

    int vetor[n];

    for(int k = 0; k < n; k++){
        vetor[k] = lista.top();
        // cout << vetor[k] << endl;
        lista.pop();
    }

    for(int k = 0; k < q; k++){
        
        cin >> a;
        cout << vetor[--a] << endl;

    }



    



    return 0;
}