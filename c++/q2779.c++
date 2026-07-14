#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>
#include <set>

using namespace std;

int main(){
    
    int n, m, a;
    cin >> n >> m;

    set<int> set;

    for(int i = 0; i < m; i++){
        cin >> a;
        set.insert(a);
    }

    cout << n - set.size() << endl;

    return 0;
}
