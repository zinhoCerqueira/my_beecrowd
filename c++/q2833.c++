    #include <iostream>
    #include <iomanip>
    #include <vector>
    #include <cmath>
    #include <string>
    #include <set>

    using namespace std;

    int main(){
        
        int n, c, m, x, resposta;
        cin >> n >> c >> m;
        
        vector<int> carimbadas;
        set<int> compradas;

        for(int i = 0; i < c; i++){
            cin >> x;
            carimbadas.push_back(x);
        }

        for(int i = 0; i < m; i++){
            cin >> x;
            compradas.insert(x);
        }

        resposta = carimbadas.size();

        for(int i = 0; i < c; i++){
            if(compradas.find(carimbadas[i]) != compradas.end()){
                resposta--;
            }
        }

        cout << resposta << endl;
        


        return 0;
    }
