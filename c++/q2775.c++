#include <iostream>
#include <iomanip>
#include <list>
#include <cmath>
#include <string>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int bubbleSort(std::list<int> &ordem, std::list<int> &segundaLista) {
    int n = ordem.size(), soma = 0;
    auto it_i = ordem.begin();
    auto it_j_segunda = segundaLista.begin();

    for (int i = 0; i < n - 1; ++i) {
        auto it_j = ordem.begin();

        for (int j = 0; j < n - i - 1; ++j) {
            auto next_it_j = std::next(it_j);
            auto next_it_j_segunda = std::next(it_j_segunda);

            if (*it_j > *next_it_j) {
                swap(*it_j, *next_it_j);
                swap(*it_j_segunda, *next_it_j_segunda);
                soma = soma + *it_j_segunda + *next_it_j_segunda;
            }

            ++it_j;
            ++it_j_segunda;
        }

        ++it_i;
        it_j_segunda = segundaLista.begin();
    }

    return soma;
}


int main(){
    
    int n, aux;
    list<int> ordem;
    list<int> valor;

    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> aux;
            ordem.push_back(aux);
        }

        for(int i = 0; i < n; i++){
            cin >> aux;
            valor.push_back(aux);
        }

        int soma = bubbleSort(ordem, valor);
        
        cout << soma << endl;

        ordem.clear();
        valor.clear();

    }

    return 0;
}
