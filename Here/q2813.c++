#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int x;  
    int casa = 0, escritorio = 0;
    int extra_casa = 0;
    int extra_trabalho = 0;
    cin >> x;
    while(x--){
        string ida, volta;
        cin >> ida >> volta;
        if(ida == "chuva" && extra_casa == 0){
            casa++ ;
            extra_trabalho++;
        }
        else if (ida == "chuva" && extra_casa > 0)
        {
            extra_casa--;
            extra_trabalho++;
        }
        if(volta == "chuva" && extra_trabalho == 0){
            escritorio++;
            extra_casa++;
        }
        else if (volta == "chuva" && extra_trabalho >0)
        {
            extra_trabalho--;
            extra_casa++;
        }
    }
    cout << casa << " " << escritorio << endl;
    return 0;

}