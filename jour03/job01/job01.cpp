#include <iostream>
#include <string.h>

int main() {
    char string[] = "vive la plateforme !";
    std::cout << string << std::endl;

    for (int i = 0; i < strlen(string); i++) {

        if (!(97 <= string[i] && string[i] <= 122)) {
            continue;
        };
        string[i] -= 32;
    };

    std::cout << string << std::endl;

    return 0;
}
