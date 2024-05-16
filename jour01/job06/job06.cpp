#include <iostream>

int main() {
    int n = 0;
    std::cout << "Veuillez entrer un nombre entier pour afficher sa table de multiplication: ";
    std::cin >> n;

    std::cout << "Table de multiplication de " << n << ":" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }

    return 0;
}
