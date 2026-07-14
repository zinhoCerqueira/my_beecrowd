#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    char letra;
    cin >> letra;

    letra = tolower(letra);

    int pos = letra - 'a' + 1;
    cout << pos;
}
