#include <iostream>

using namespace std;

int main(){

    int a = 0;
    int b = 0;
    int i;
    int j;

    cout << "Podaj liczbe a: ";
    cin >> a;

    cout << "Podaj liczbe b: ";    
    cin >> b;

    cout << "Podano liczby a = " << a << " oraz b = " << b << endl;

    // Wiersz długości a

    cout << endl << "Wiersz dlugosci a: " << endl;
    for (i = 0; i < a; i++){
        cout << "*";
    }

    // Kolumna długości b

    cout << endl << endl << "Kolumna dlugosci b: " << endl;
    for (i = 0; i < b; i++){
        cout << "*" << endl;
    }

    // Prostokąt a-b

    cout << endl << endl << "Prostokat o bokach a i b: " << endl;

    for (i = 0; i < a; i++){
        for (j = 0; j < b; j++){
            cout << "*";
        }
        cout << endl;
    }

    // Obwód prostokątu a-b

    cout << endl << endl << "Obwod prostokatu o bokach a i b: " << endl;

    for (i = 0; i < a; i++){
        if (i == 0 || i == a-1){
            for (j = 0; j < b; j++){
                cout << "*";
            }
        } else {
            for (j = 0; j < b; j++){
                if (j == 0 || j == b-1){
                    cout << "*";
                }
                else {
                cout << " ";    
            }
            }
        }
        cout << endl;
    }

    // Trójkąt równoramienny: bok = a, lewa strona konsoli

    cout << endl << endl << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu: " << endl;

    for (i = 1; i < a + 1; i++) {
        for (j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    // Trójkąt równoramienny: bok = a, prawa strona konsoli

    cout << endl << endl << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu: " << endl;

    for (i = a; i > 0; i--) {
        for (j = 0; j < a; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}