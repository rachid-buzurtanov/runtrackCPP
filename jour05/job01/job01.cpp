#include <iostream>
#include "job01.hpp"


Joueur::~Joueur() {
    std::cout << "Joueur detruit" << std::endl;
}

void Joueur::initialize(double initialX, double initialY) {
    x = initialX;
    y = initialY;
}

void Joueur::setX(double newX) {
    x = newX;
}

void Joueur::setY(double newY) {
    y = newY;
}


int main() {
    Joueur johnDoe;;
    johnDoe.initialize(32.58, -12.93);
    std::cout << johnDoe.x << " " << johnDoe.y << std::endl;

    johnDoe.setX(johnDoe.x + 1.5);
    johnDoe.setY(johnDoe.y + 1.5);
    std::cout << johnDoe.x << " " << johnDoe.y << std::endl;

    return 0;
}
