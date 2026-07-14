#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    string  s, pt1, pt2;
    int i;

    while(getline(cin, s)){
        i = s.find(',');
        pt1 = s.substr(0, i);
        pt2 = s.substr(i+1);

        cout << pt1 << endl;
        cout << pt2 << endl; 
    }
}
