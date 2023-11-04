#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int cha, p1, p2, p3, p4, p5, total = 0;

    cin >> cha;
    cin >> p1 >> p2 >> p3 >> p4 >> p5;

    if(p1 == cha){
        total++;
    }
    if(p2 == cha){
        total++;
    }
    if(p3 == cha){
        total++;
    }
    if(p4 == cha){
        total++;
    }
    if(p5 == cha){
        total++;
    }

    cout << total << endl;
    return 0;
    
}