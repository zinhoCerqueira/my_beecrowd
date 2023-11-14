#include <iostream>

int main() {
    int X, Y;
    std::cin >> X;
    std::cin >> Y;

    // Trocar os valores de X e Y, se necessário, para garantir que X seja menor ou igual a Y
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    int sum = 0;
    for (int i = X+1; i < Y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
