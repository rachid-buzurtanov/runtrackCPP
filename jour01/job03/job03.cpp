#include <iostream>

int main() {
    int n = 0;

    std::cout << "Enter an integer n: ";
    std::cin >> n;

    if (n == 0) {
        return 0; 
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Hello World" << std::endl;
    }

    return 0;
}
