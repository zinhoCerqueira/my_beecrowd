#include <iostream>
#include <iomanip>
#include <list>
#include <string>

 
using namespace std;
 
int main() {

    double n = 3.14, v, w, altura, area;

    cout << fixed << setprecision(2);

    while(cin >> v && cin >> w){
        double r = w / 2;

        area = n * r * r;
        altura = v / area;

        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }

    return 0;
    
}