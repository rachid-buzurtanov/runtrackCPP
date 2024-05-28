#include <iostream>


int main() {
    unsigned int n;
    std::cout << "Donnez un entier positif ";
    std::cin >> n;

    unsigned long c = 0;
    unsigned long b = 1;
    unsigned long long a = 1;

    do {
        std::cout << a << std::endl;
        c = b;
        b = a;
        a = b + c;
    } while (a <= n);

    return 0;
}
