//
// Created by BramboraSK on 24. 9. 2021.
//

// Zadajte číslo, k zadanému číslu 3-krát pripočítajte hodnotu 7.

#include <iostream>

using namespace std;

int main() {
    int x = 0;

    cout << "Zadaj cislo:";
    cin >> x;

    for(int i = 0; i < 3; ++i) {
        x += 7;
    }

    cout << x;

    return 0;
}