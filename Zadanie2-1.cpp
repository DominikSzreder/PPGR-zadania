#include <iostream>

using namespace std;

int main(){

    int i;
    int n = 0;

    int suma_szeregu = 0;

    cout << "Prosze podac dodatnia liczbe calkowita: ";
    cin >> n;

    for (i = 1; i < n+1; i++){
        
        suma_szeregu = suma_szeregu + i;

    }

    cout << "Suma szeregu wynosi: " << suma_szeregu << ".";

    return 0;
}