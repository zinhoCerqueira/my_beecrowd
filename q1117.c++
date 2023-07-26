    #include <iostream>
    #include <iomanip>
    #include <list>

    
    using namespace std;
    
    int main() {


        float n1 = -1.0, n2 = -1.0, valor;
        int n = 0;
        cout << fixed << setprecision(1);

        
        while(n < 2){
            cin >> valor;

            if(valor >= 0 && valor <= 10){
                if(n1 == -1.0){
                    n1 = valor;
                    n++;
                }
                else if(n2 == -1.0){
                    n2 = valor;
                    n++;
                }
                else{
                    cout << "nota invalida" << endl;
                }
            }
        }

        cout << "media = " << (n1+n2)/2 << endl;
        
        return 0;
        
    }