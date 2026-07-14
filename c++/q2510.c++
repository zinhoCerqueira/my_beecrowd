#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <algorithm>


using namespace std;

bool contains(const std::vector<string>& vetor, const string& elemento) {
    return find(vetor.begin(), vetor.end(), elemento) != vetor.end();
}

int main(){
    
    int a;
    string x;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> x;
        cout << "Y" << endl;
    }
    return 0;
}