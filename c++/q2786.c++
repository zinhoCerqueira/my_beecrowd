#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    int largura, comprimento;
    int t1, t2;

    cin >> largura >> comprimento;

    t1 = ( largura * comprimento ) + (( comprimento - 1 ) * ( largura-1 ));
    t2 = ((largura - 1) * 2) + ((comprimento - 1) * 2);

    cout << t1 << endl;
    cout << t2 << endl;


}
