#include <iostream>

int main() {
    int n, m;

    std::cout << "Entrez deux entiers n et m : ";
    std::cin >> n >> m;

    std::cout << "Avant l'echange : n = " << n << ", m = " << m << std::endl;

    int temp = n;
    n = m;
    m = temp;

    std::cout << "Apres l'echange : n = " << n << ", m = " << m << std::endl;

    return 0;
}
