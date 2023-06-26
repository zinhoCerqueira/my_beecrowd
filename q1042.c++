#include <iostream>
#include <iomanip>
#include <list>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    std::list<int> list;
    int n1, n2, n3;
    
    cin >> n1;
    list.push_back(n1);
    cin >> n2;

    if(n2 >= n1){
        list.push_back(n2);
    }
    else{
        list.push_front(n2);
    }

    cin >> n3;
    if(n3<=list.front()){
        list.push_front(n3);
    }
    else if(n3>=list.back()){
        list.push_back(n3);
    }
    else{
        int ult = list.back();
        list.pop_back();
        list.push_back(n3);
        list.push_back(ult);

    }

    for (const auto& elemento : list) {
        std::cout << elemento << endl;
    }

    cout << endl;

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;

    
    
    
    
    return 0;
}