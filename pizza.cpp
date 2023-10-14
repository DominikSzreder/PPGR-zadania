#include <iostream>

using namespace std;

int main(){

    int pizza = 0;
    int kawalki = 0;
    int razem = 0;

    int uczestnicy = 0;

    int dla_uczestnika = 0; 
    int reszta = 0;

    cout << "Podaj ilość kartonów pizzy: ";
    cin >> pizza;
    cout << "Podaj ilość kawałków w kartonie: ";
    cin >> kawalki;

    razem = pizza*kawalki;

    cout << "Podaj liczbę uczestników imprezy: ";
    cin >> uczestnicy;

    reszta = razem % uczestnicy;
    dla_uczestnika = (razem - reszta) / uczestnicy; 


    cout << "Uczestnicy otrzymają " << dla_uczestnika << " kawałków." << endl;
    cout << "Organizator otrzyma " << reszta << " kawałków." << endl;    

    return 0;
}