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
    for (int i = X; i <= Y; i++) {
        if (i % 13 != 0) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
