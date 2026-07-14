#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    string a;

    while(cin >> a){
        int position = a.find(".");
        // cout << position << endl;

        int number1 = std::stoi(a.substr(position+1));
        int number2 = std::stoi(a.substr(0, position));


        cout << number1;
        cout << "." ;
        cout << number2;
        cout << endl;
    }

    
    



    return 0;
}
