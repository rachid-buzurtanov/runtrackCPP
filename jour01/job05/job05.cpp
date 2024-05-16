#include <iostream>
#include <iomanip>

int main() {
    float a = 0;
    std::cout << "Veuillez donner un 1er entier: ";
    std::cin >> a;

    float b = 0;
    std::cout << "Veuillez donner un 2ème entier: ";
    std::cin >> b;

    float product = a * b;

    if (product == static_cast<int>(product)) {
        std::cout << "Le produit est égale à " << static_cast<int>(product) << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(2) << "Le produit est égale à " << product << std::endl;
    }

    return 0;
}
