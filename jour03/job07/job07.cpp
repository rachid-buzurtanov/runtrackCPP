#include <iostream>
#include <limits>

int main() {
    const int SIZE = 10;
    int T[SIZE];

    // Demander à l'utilisateur de saisir 10 entiers
    std::cout << "Veuillez saisir 10 entiers :" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Entier #" << (i + 1) << ": ";
        while (!(std::cin >> T[i])) { // Vérification de la saisie
            std::cin.clear(); // Efface l'état d'erreur
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore la ligne erronée
            std::cout << "Entrée invalide. Veuillez entrer un entier : ";
        }
    }

    // Trouver l'indice du plus grand élément
    int maxIndex = 0;
    for (int i = 1; i < SIZE; ++i) {
        if (T[i] > T[maxIndex]) {
            maxIndex = i;
        }
    }

    // Afficher l'indice du plus grand élément
    std::cout << "L'indice du plus grand élément est : " << maxIndex << std::endl;

    return 0;
}
