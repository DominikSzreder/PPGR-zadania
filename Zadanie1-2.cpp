// Napisz program, który sprawdzi, czy liczba
// całkowita jest dodatnia, ujemna czy może jest 0.

#include <iostream>

using namespace std;

int main() {

    int x = 0;

    cout << "Proszę podać liczbę całkowitą do sprawdzenia: ";
    cin >> x;
    
    if (x == 0)
        cout << "Podana liczba jest równa 0.";
    
    else if (x > 0)
        cout << "Liczba " << x << " jest dodatnia.";

    else
        cout << "Liczba " << x << " jest ujemna.";


    return 0;
}