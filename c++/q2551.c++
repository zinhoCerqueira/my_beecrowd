#include <iostream>
using namespace std;

    /* beecrowd | 2551
Novo Recorde    */

int main()
{
    int n,km,tempo,dia,dias_record[2048],num_print; //treino [dia] [0=duracao treino em minutos] [1= distancia percorrida em km]
    float media, recorde;

    num_print=0;
    while(cin >> n)
    {
        recorde=0;
        for(dia=0;dia<n;dia++)
        {
            cin >> tempo >> km;
            // cout << "li " << treino[dia][0] << " e " << treino[dia][1] << '\n';

            media = (km + 0.0) / tempo;

            // cout << "\n media : " << media ;

            if(media>recorde)
            {
                recorde = media;
                // cout << "\nrecorde batido no dia" << dia+1 << " : " << recorde <<'\n';
                dias_record[num_print++] = dia+1;
            }

        }
    }

    for(dia=0;dia<num_print;dia++)
    {
        cout << dias_record[dia] <<'\n';
    }
    return 0;
}