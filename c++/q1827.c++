#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

int main()
{

    int n;

    while (cin >> n)
    {
        int mat[n][n];
        int meio = n/2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (i < n/3 || j < n/3 || i >= (n - (n/3)) || j >= (n - (n/3))){
                    mat[i][j] = 0;
                }
                else
                {
                    mat[i][j] = 1;
                }

                if(i == meio && j == meio){
                    mat[meio][meio] = 4;
                }
                else if(mat[i][j] == 1){

                }
                else if (i == j)
                {
                    mat[i][j] = 2;
                }
                else if (i + j == n - 1)
                {
                    mat[i][j] = 3;
                }

                cout << mat[i][j];
                
            }

           
            cout << endl;
            
        }
        cout << endl;


    }

    return 0;
}