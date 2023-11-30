#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    int n;
    string z;
    
    cin >> n;

    int total_ps, total_pb, total_pa, s, b, a;
    int total_s = 0, total_b = 0, total_a = 0;
    int total_as = 0, total_ab = 0, total_aa = 0;


    for(int i = 0; i < n; i++){
        cin >> z;
        cin >> total_ps >> total_pb >> total_pa;
        cin >> s >> b >> a;

        total_s = total_s + total_ps;
        total_b = total_b + total_pb;
        total_a = total_a + total_pa;

        total_as = total_as + s;
        total_ab = total_ab + b;
        total_aa = total_aa + a;


    }

    double saque = static_cast<double> (100*total_as)/total_s;
    double bloqueio = static_cast<double> (100*total_ab)/total_b;
    double ataque = static_cast<double> (100*total_aa)/total_a;

    cout << "Pontos de Saque: " << saque << " %."<< endl;
    cout << "Pontos de Bloqueio: " << bloqueio << " %."<< endl;
    cout << "Pontos de Ataque: " << ataque << " %."<< endl;


    return 0;
}