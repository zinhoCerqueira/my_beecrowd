#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{

    int a;

    while (cin >> a)
    {

        int mat[a][3];
        string x, y;

        for (int j = 0; j < a; j++)
        {

            cin >> x >> y;
            mat[j][0] = stoi(x);

            size_t pos = y.find('=');
            string parteAntes = y.substr(0, pos);
            string parteDepois = y.substr(pos + 1);

            mat[j][1] = stoi(parteAntes);
            mat[j][2] = stoi(parteDepois);
        }

        string mat1[a][3];
        vector<string> nomes;
        

        for (int j = 0; j < a; j++)
        {

            cin >> mat1[j][0] >> mat1[j][1] >> mat1[j][2];

            int endereco = stoi(mat1[j][1]);
            endereco = endereco - 1;

            if (mat1[j][2] == "+")
            {
                if (mat[endereco][0] + mat[endereco][1] != mat[endereco][2])
                {
                    nomes.push_back(mat1[j][0]);
                }
                
            }
            else if (mat1[j][2] == "-")
            {
                if (mat[endereco][0] - mat[endereco][1] != mat[endereco][2])
                {
                    nomes.push_back(mat1[j][0]);
                }
                
            }
            else if (mat1[j][2] == "*")
            {
                if (mat[endereco][0] * mat[endereco][1] != mat[endereco][2])
                {
                    nomes.push_back(mat1[j][0]);
                }
                
            }
        }

        if(nomes.size() != a){
            sort(nomes.begin(), nomes.end());
            for (const std::string& elemento : nomes) {
                cout << elemento << " ";
            }
            cout << endl;
            nomes.clear();
        }
        else{
            cout << "None Shall Pass!" << endl;
        }
        

       
    }

    return 0;
}