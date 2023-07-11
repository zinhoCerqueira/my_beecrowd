#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main()
{

    int n1, n2, n3, n4, n5;
    int par = 0, impar = 0, posi = 0, nega = 0;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;

    if(n1%2 == 0){
        par++;
    }
    else{
        impar++;
    }

    if(n1 > 0){
        posi++;
    }
    else if(n1 < 0){
        nega++;
    }

    if(n2%2 == 0){
        par++;
    }
    else{
        impar++;
    }

    if(n2 > 0){
        posi++;
    }
    else if(n2 < 0){
        nega++;
    }

    if(n3%2 == 0){
        par++;
    }
    else{
        impar++;
    }

    if(n3 > 0){
        posi++;
    }
    else if(n3 < 0){
        nega++;
    }

    if(n4%2 == 0){
        par++;
    }
    else{
        impar++;
    }

    if(n4 > 0){
        posi++;
    }
    else if(n4 < 0){
        nega++;
    }

    if(n5%2 == 0){
        par++;
    }
    else{
        impar++;
    }

    if(n5 > 0){
        posi++;
    }
    else if(n5 < 0){
        nega++;
    }

    cout << par << " valor(es) par(es)" <<endl;
    cout << impar << " valor(es) impar(es)" <<endl;
    cout << posi << " valor(es) positivo(s)" <<endl;
    cout << nega << " valor(es) negativo(s)" <<endl;

    return 0;
}