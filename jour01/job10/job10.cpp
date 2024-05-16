#include <iostream>

int main() {
    double prix_ht_par_kilo;
    double nombre_kilos;
    double taux_tva;

    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prix_ht_par_kilo;

    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nombre_kilos;

    std::cout << "Entrez le taux de TVA en pourcentage : ";
    std::cin >> taux_tva;

    double prix_ttc = prix_ht_par_kilo * nombre_kilos * (1 + taux_tva / 100.0);

    std::cout << "Le prix TTC des carottes est de : " << prix_ttc << " euros" << std::endl;

    return 0;
}
