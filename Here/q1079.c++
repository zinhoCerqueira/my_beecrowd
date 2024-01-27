#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n;
    float x, y, z;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;
        cin >> z;

        cout << (((x * 2) + (y * 3) + (z * 5)) / 10) << endl;
    }

    return 0;
}
