#include <iostream>
#include <cstring>
#include <cctype>

bool isValidHourFormat(const char* time) {
    // Vérifier que la longueur de la chaîne est exactement 5 caractères
    if (strlen(time) != 5) {
        return false;
    }

    // Vérifier que les deux premiers caractères sont des chiffres
    if (!isdigit(time[0]) || !isdigit(time[1])) {
        return false;
    }

    // Vérifier que le troisième caractère est 'h'
    if (time[2] != 'h') {
        return false;
    }

    // Vérifier que les deux derniers caractères sont des chiffres
    if (!isdigit(time[3]) || !isdigit(time[4])) {
        return false;
    }

    return true;
}

int main() {
    char time[6]; // 5 caractères pour "XXhXX" + 1 caractère pour le terminateur null
    std::cout << "Entrez l'heure au format XXhXX: ";
    std::cin >> time;

    if (isValidHourFormat(time)) {
        std::cout << "L'heure est valide." << std::endl;
    } else {
        std::cout << "L'heure n'est pas valide." << std::endl;
    }

    return 0;
}
