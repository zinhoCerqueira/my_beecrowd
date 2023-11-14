#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    while (n != 0)
    {
        int matriz[n][n];

        // Preencher a matriz com valores em camadas
        int valor = 1;
        int camada = 0;
        while (camada <= n / 2)
        {
            for (int i = camada; i < n - camada; ++i)
            {
                for (int j = camada; j < n - camada; ++j)
                {
                    matriz[i][j] = valor;
                }
            }
            ++camada;
            ++valor;
        }

        // Imprimir a matriz preenchida
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                std::cout << matriz[i][j] << "   ";
            }
            std::cout << std::endl;
        }
        // std::cout << std::endl;

        std::cin >> n;
    }

    
    return 0;
}
