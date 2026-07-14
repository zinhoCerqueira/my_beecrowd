#include <iostream>
#include <iomanip>
#include <list>

 
using namespace std;
 
int main() {
 
    int i = 1, rep = 0, j=7, numero;

    while(i < 10){
        if(i%2 != 0){
            cout << "I=" << i << " J=" << j << endl;
        }   
        
        rep++;

        if(rep == 3){
            rep = 0;
            i++;
        }

        j--;
        if(j == 4){
            j = 7;
        }
        //  std::cin >> numero;

    }

    return 0;
    
}