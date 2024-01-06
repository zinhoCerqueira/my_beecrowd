#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int N;
    long long int X;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> X;
        bitset<64> b(X);
        cout << b << endl;

        string a = b.to_string();
        bool ok = true;

        int resposta = 0, contador = 0;
        
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '1' && ok){
                ok = true;
                contador++;
            }
            else{
                ok = false;
                if(resposta < contador){
                    resposta = contador;
                }
                contador = 0;
            }

            
        }

        cout << resposta << endl;
    }

    return 0;
}