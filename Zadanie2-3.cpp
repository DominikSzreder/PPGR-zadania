#include <iostream>

using namespace std;

int main(){

    int miesiac;

    cout << "Podaj liczbe z przedzialu [1-12]: ";
    cin >> miesiac;

    switch (miesiac)
    {
    case 1:
        /* code */
        cout << "Styczen, 31 dni, pochmornie" << endl;
        break;
    case 2:
        /* code */
        cout << "Luty, 28 dni, pochmornie" << endl;
        break;
    case 3:
        /* code */
        cout << "Marzec, 31 dni, pochmornie" << endl;
        break;
    case 4:
        /* code */
        cout << "Kwiecien, 30 dni, slonecznie" << endl;
        break;
    case 5:
        /* code */
        cout << "Maj, 31 dni, slonecznie" << endl;
        break;
    case 6:
        /* code */
        cout << "Czerwiec, 30 dni, slonecznie" << endl;
        break;
    case 7:
        /* code */
        cout << "Lipiec, 31 dni, slonecznie" << endl;
        break;
    case 8:
        /* code */
        cout << "Sierpien, 31 dni, slonecznie" << endl;
        break;
    case 9:
        /* code */
        cout << "Wrzesien, 30 dni, slonecznie" << endl;
        break;
    case 10:
        /* code */
        cout << "Pazdziernik, 31 dni, pochmornie" << endl;
        break;
    case 11:
        /* code */
        cout << "Listopad, 30 dni, pochmornie" << endl;
        break;
    case 12:
        /* code */
        cout << "Grudzien, 31 dni, pochmornie" << endl;
        break;
    default:
        cout << "Podales liczbe spoza przedzialu [1-12]. Do widzenia." << endl;
        break;
    }






    return 0;
}