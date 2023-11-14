#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {
 
    int i = 1, rep = 0, j=7, numero, rep2 = 0;

    while(i < 10){
        if(i%2 != 0){
            cout << "I=" << i << " J=" << j << endl;
        }   
        
        rep++;

        j--;
        if(rep == 3){
            rep = 0;
            i++;
            j = j + 4;
        }

    }

    return 0;
    
}