#include <iostream>
#include <iomanip>

int main() {
    float a = 0;
    std::cout << "Veuillez donner un 1er nombre: ";
    std::cin >> a;

    float b = 0;
    std::cout << "Veuillez donner un 2ème nombre: ";
    std::cin >> b;

    float sum = a + b;

    if (sum == static_cast<int>(sum)) {
        std::cout << "La somme est égale à " << static_cast<int>(sum) << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(2) << "La somme est égale à " << sum << std::endl;
    }

    return 0;
}
