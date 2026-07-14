#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>


using namespace std;

int main(){
    
    std::cout << std::fixed;
    int n;
    cin >> n;
    long long int x = (pow(n, 4) - (6 * pow(n, 3)) + (23 * pow(n, 2)) - (18 * n) + 24 ) / 24;

    cout << x << endl;

    return 0;
}
