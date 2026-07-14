#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    string alfabeto;
    list<int> cod;
    int c, k;

    while(getline(cin, alfabeto)){
        cin >> c;
        cin.ignore();
        for(int i = 0; i < c; i++){
            cin >> k;
            cin.ignore();
            cout << alfabeto[--k];
        }
        cout << endl;
    }
}