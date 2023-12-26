#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    int n;
    int w, h, x0, y0;

    string elemento, nv;
    int cx, cy, r, dano;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> w >> h >> x0 >> y0;
        cin >> elemento >> nv >> cx >> cy;

        double closest_x = max(x0, min(cx, x0 + w));
        double closest_y = max(y0, min(cy, y0 + h));

        double distance = sqrt(pow(cx - closest_x, 2) + pow(cy - closest_y, 2));

        if(elemento == "fire"){
            dano = 200;
            if(nv == "1"){
                r = 20;
            }
            else if(nv == "2"){
                r = 30;
            }
            else if(nv == "3"){
                r = 50;
            }
        }
        else if(elemento == "water"){
            dano = 300;
            if(nv == "1"){
                r = 10;
            }
            else if(nv == "2"){
                r = 25;
            }
            else if(nv == "3"){
                r = 40;
            }
        }
        else if(elemento == "earth"){
            dano = 400;
            if(nv == "1"){
                r = 25;
            }
            else if(nv == "2"){
                r = 55;
            }
            else if(nv == "3"){
                r = 70;
            }
        }
        else if(elemento == "air"){
            dano = 100;
            if(nv == "1"){
                r = 18;
            }
            else if(nv == "2"){
                r = 38;
            }
            else if(nv == "3"){
                r = 60;
            }
        }
        
        
        if (distance <= r) {
            cout << dano << std::endl;
        } else {
            cout << "0" << std::endl;
        }

        
    }

    return 0;
}