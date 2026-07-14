#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main()
{

    int p1, p2, cont = 1, total =0, gre =0, nal =0, empa = 0;

    while (cont == 1){
        cin >> p1 >> p2;
        total++;
        if(p1 > p2){
            nal++;
        }
        else if(p1 < p2){
            gre++;
        }
        else{
            empa++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> cont;

    }

    cout << total << "grenais" << endl;
    cout << "Inter: " << nal << endl;
    cout << "Gremio: " << gre << endl;
    cout << "Empates: " << empa << endl;

    if(gre > nal){
        cout << "Gremio venceu mais" << endl;
    }
    else if(nal > gre){
        cout << "Inter venceu mais" << endl;
    }

    
    return 0;
}