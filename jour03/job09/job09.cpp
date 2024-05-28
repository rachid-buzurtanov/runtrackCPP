#include <iostream>
#include <string>

// Fonction pour obtenir la longueur d'une chaîne (n'est plus nécessaire avec std::string)
int getStringLength(const std::string& str) {
    return str.length();
}

// Fonction pour vérifier si une sous-chaîne est incluse dans une chaîne principale
bool stringIncludedInString(const std::string& subString, const std::string& fullString) {
    return fullString.find(subString) != std::string::npos;
}

int main() {
    std::cout << "Donnez deux chaines de caractères (ENTREE entre chaque chaine) " << std::endl;

    std::string string1;
    std::string string2;

    std::getline(std::cin, string1);
    std::getline(std::cin, string2);

    if (stringIncludedInString(string1, string2)) {
        std::cout << "La première chaîne est incluse dans la deuxième." << std::endl;
    } else {
        std::cout << "La première chaîne n'est pas incluse dans la deuxième." << std::endl;
    }

    return 0;
}
