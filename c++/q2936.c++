#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int a, b, c, d, e, x = 0;

    cin >> a >> b >> c >> d >> e;

    x = 225 + (a * 300) + (b * 1500) + (c * 600) + (d * 1000) + (e * 150);

    cout << x << endl;

    return 0;
}
