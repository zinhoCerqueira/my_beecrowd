#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    
    cout << fixed << setprecision(1);
    double n;
    double menor, maior;

    cin >> n;

    menor = n / log(n);
    maior = 1.25506 * (n / log(n)) ;

    cout << menor << " " << maior << endl;



    return 0;
}