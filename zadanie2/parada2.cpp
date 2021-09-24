//
// Created by BramboraSK on 24. 9. 2021.
//

// Zadajte interval čísel. Z intervalu vypíšte čísla s krokom 10.

#include <iostream>

using namespace std;

int main() {
    int min = 0, max = 0;

    cout << "Zadaj spodnu hranicu intervalu:";
    cin >> min;

    cout << "Zadaj hornu hranicu intervalu:";
    cin >> max;

    for(int i = min; i <= max; i += 10) {
        cout << i << endl;
    }

    return 0;
}