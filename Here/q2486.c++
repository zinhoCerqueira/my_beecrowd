#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    
    int a;
    cin >> a;
    cin.ignore();

    int mult, total, valorAlimento;
    string alimento, linha;

    while (a != 0)
    {
        /* code */
        total = 0;
        for(int i = 0; i < a; i++){

            getline(cin, linha);

            string last = linha.substr(linha.length() - 3);

            if(last == "sco"){
                valorAlimento = 85;
                size_t pos = linha.find("morango fresco");
                linha.erase(pos, 14);
            }
            else if(last == "mao"){
                valorAlimento = 85;
                size_t pos = linha.find("mamao");
                linha.erase(pos, 5);
            }
            else if(last == "lha"){
                valorAlimento = 70;
                size_t pos = linha.find("goiaba vermelha");
                linha.erase(pos, 15);
            }
            else if(last == "nga"){
                valorAlimento = 56;
                size_t pos = linha.find("manga");
                linha.erase(pos, 5);
            }
            else if(last == "lis"){
                valorAlimento = 34;
                size_t pos = linha.find("brocolis");
                linha.erase(pos, 8);
            }
            else{
                last = linha.substr(linha.length() - 9);
                if(last == "e laranja"){
                    valorAlimento = 120;
                    size_t pos = linha.find("suco de laranja");
                    linha.erase(pos, 15);
                }
                else{
                    valorAlimento = 50;
                    size_t pos = linha.find("laranja");
                    linha.erase(pos, 7);
                }
            }
            mult = stoi(linha);

            // cout << mult << endl;

            total = total + (mult * valorAlimento);

        }

        if(total < 110){
            cout << "Mais " << 110-total << " mg" << endl;
        }
        else if(total > 130){
            cout << "Menos " << total-130 << " mg" << endl;
        }
        else{
            cout << total << " mg" << endl;
        }

        // cout << mult << " - " << alimento << endl; 

        cin >> a;
        cin.ignore();

    }
    
    return 0;
}