#include <iostream>

int main() {
    int entier;
    int somme = 0;
    int nombre_entiers = 0; 

    std::cout << "Veuillez entrer cinq entiers : ";

    for (int i = 0; i < 5; ++i) {
        std::cin >> entier;
        somme += entier;
        nombre_entiers++; 
    }

    double moyenne = static_cast<double>(somme) / nombre_entiers;

    std::cout << "La moyenne des entiers est : " << moyenne << std::endl;

    return 0;
}
