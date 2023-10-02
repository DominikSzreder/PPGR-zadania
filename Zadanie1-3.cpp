// Napisz program, który sprawdzi, czy podana
// liczba całkowita jest parzysta, nieparzysta, czy
// żadna (0).

#include <iostream>

using namespace std;

int main() {

    int x = 0;

    cout << "Proszę podać liczbę całkowitą do sprawdzenia: ";
    cin >> x;
    
    if (x == 0)
        cout << "Podana liczba jest równa 0.";
    
    else if (x % 2 == 0)
        cout << "Liczba " << x << " jest parzysta.";

    else
        cout << "Liczba jest nieparzysta.";


    return 0;

}