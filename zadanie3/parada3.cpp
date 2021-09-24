//
// Created by BramboraSK on 24. 9. 2021.
//

// Generujte čísla od -10 do 10. Spočítajte 6 čísel, ktoré sú >0 a zároveň deliteľné tromi.

#include <iostream>
#include <random>

using namespace std;

int main() {
    int sucet = 0, i = 0, random = 0;

    // Dala by sa pouzit aj funkcia rand z kniznice stdlib, ale nie je tak spolahliva a neodporuca sa na opakovane generovanie cisel.
    random_device device;
    mt19937 mt(device());
    uniform_int_distribution<int> dist(-10, 10);

    while(i < 6) {
        random = dist(mt);

        if(random > 0 && random % 3 == 0) {
            // Pokial chceme sledovat, ake cisla boli generovane, tento riadok odkomentujeme
            // cout << random << endl;
            sucet += random;
            i++;
        }
    }

    cout << sucet;

    return 0;
}
