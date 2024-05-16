#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Veuillez entrer trois entiers : ";
    std::cin >> a >> b >> c;

    int plus_grand = a;

    if (b > plus_grand) {
        plus_grand = b;
    }

    if (c > plus_grand) {
        plus_grand = c;
    }

    std::cout << "Le plus grand des trois entiers est : " << plus_grand << std::endl;

    return 0;
}
