#include <iostream>
#include <iomanip>
#include <list>
#include <string>


using namespace std;

int main(){
    
    string a;

    cin >> a ;
    // cout << a.size() << endl;

    if(a.size() <= 80 ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}