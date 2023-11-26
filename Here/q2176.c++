#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

int main(){
    
    string a;
    int contador = 0;

    getline(std::cin, a);

    for(int i = 0; i < a.size(); i++){
        if(a[i] == '1'){
            contador++;
        }
    }

    if(contador % 2 == 0){
        a.push_back('0');
    }
    else{
        a.push_back('1');
    }



    cout << a << endl;


    return 0;
}