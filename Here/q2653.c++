#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <set>

using namespace std;

int main(){
    
    string s;
    set <string> meuSet;

    while(cin >> s){
        meuSet.insert(s);
    }

    cout << meuSet.size() << endl;

    return 0;
}