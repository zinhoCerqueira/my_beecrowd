#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
 
using namespace std;


 
int main() {
    
    string p1, p2, p3;

    cin >> p1;
    cin >> p2;
    cin >> p3;
    
    if(p1 == "vertebrado"){
        if(p2 == "ave"){
            if(p3 == "carnivoro"){
                cout << "aguia" << endl;
            }
            else{
                cout << "pomba" << endl;
            }
        }
        else{
            if(p3 == "onivoro"){
                cout << "homem" << endl;
            }
            else{
                cout << "vaca" << endl;
            }
        }
    }
    else{
        if(p2 == "inseto"){
            if(p3 == "hematofago"){
                cout << "pulga" << endl;
            }
            else{
                cout << "lagarta" << endl;
            }
        }
        else{
            if(p3 == "hematofago"){
                cout << "sanguessuga" << endl;
            }
            else{
                cout << "minhoca" << endl;
            }
        }
    }
    
    
    return 0;
}