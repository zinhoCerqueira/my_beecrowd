#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    int n;
    long long int matricula, maiormatricula;
    double nota, maiornota;
    bool ok = false;

    cin >> n ;

    cin >> matricula >> nota;
    maiormatricula = matricula;
    maiornota = nota;

    for(int i = 0; i< n-1; i++){
        cin >> matricula >> nota;
        if(nota >= maiornota && nota >= 8){
            maiormatricula = matricula;
            maiornota = nota;
            ok = true;
        }


    }

    if(ok){
        cout << maiormatricula << endl;
    }
    else{
        cout << "Minimum note not reached" << endl;
    }

    return 0;
    
}