#include <iostream>
#include <iomanip>
#include <list>
 
using namespace std;
 
int main() {
    
    float n1, n2, n3;
    std::list<float> list;
    
    cin >> n1;
    cin >> n2;
    cin >> n3;

    list.push_back(n1);

    if(n2 <= n1){
        list.push_back(n2);
    }
    else{
        list.push_front(n2);
    }

    if(n3 <= list.back()){
        list.push_back(n3);
    }
    else if(n3 > list.front()){
        list.push_front(n3);
    }
    else{
        float aux = list.back();
        list.pop_back();
        list.push_back(n3);
        list.push_back(aux);
    }

    float a = list.front();
    list.pop_front();

    float b = list.front();
    list.pop_front();

    float c = list.front();
    list.pop_front();

    if (a >= b+c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(a*a == (b*b) + (c*c)){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if(a*a > (b*b) + (c*c)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(a*a < (b*b) + (c*c)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if(a == b && a == c && b == c ){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if ((a==b && b!=c) || (a==c && b!=c) || (b==c && b!=a)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    
    
    
    
    
    
    return 0;
}