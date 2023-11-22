#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    cout << fixed << setprecision(1);

    double n;
    double phi = (1 + sqrt(5)) / 2;

    cin >> n;

    double fib_n = (pow(phi, n) - pow(-phi, -n)) / sqrt(5);

    cout << fib_n << endl;

    return 0;
}
