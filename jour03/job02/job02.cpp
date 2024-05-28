#include <iostream>
#include <cstring>

bool isVowel(char character) {
    char VOWELS[] = "aeiouAEIOU";

    for (int i = 0; i < strlen(VOWELS); i++) {
        if (character == VOWELS[i]) {
            return true;
        }
    };

    return false;
}

void popArray(char *string, int index) {
    int length = strlen(string);
    for (int i = index; i < length; i++) {
        string[i] = string[i + 1];
    }
}

int main() {
    char string[] = "vive la plateforme !";
    std::cout << string << std::endl;

    int i = 0;
    while (string[i] != '\0') {
        if (isVowel(string[i])) {
            popArray(string, i);
        } else {
            i++;
        }
    }

    std::cout << string << std::endl;

    return 0;
}
