    #include <iostream>
    #include <iomanip>
    #include <list>

    using namespace std;

    int main()
    {
        
        float n, qtd, total, coelho = 0, sapo = 0, rato = 0;
        char m;

        


        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> qtd >> m;
            if (m == 'C')
            {
                coelho = coelho + qtd;
            }
            else if (m == 'S')
            {
                sapo = sapo + qtd;
            }
            else
            {
                rato = rato + qtd;
            }
        }

        total = coelho + sapo + rato;

        cout << fixed << setprecision(0);
        cout << "Total: " << total << " cobaias" << endl;
        cout << "Total de coelhos: " << coelho << endl;
        cout << "Total de ratos: " << rato << endl;
        cout << "Total de sapos: " << sapo << endl;

        cout << fixed << setprecision(2);
        float pcoelho = (coelho * 100) /total;
        float prato = (rato * 100) /total;
        float psapo = (sapo * 100) /total;

        cout << "Percentual de coelhos: " << pcoelho << " %" << endl;
        cout << "Percentual de ratos: " << prato << " %" << endl;
        cout << "Percentual de sapos: " << psapo << " %" << endl;

        return 0;
    }