// Napisz program do znajdowania największej
// liczby wśród trzech liczb, podanych przez
// użytkownika. (3 rozwiązania)

// Making crude program template to copy into excercise 4 without worrying about initial errors

#include <iostream>

using namespace std;

int main() {

// Creating variables 

    int first_number = 0;
    int second_number = 0;
    int third_number = 0;

// Text for user to input 1st, 2nd and 3rd numbers

    cout << "Proszę podaj pierwszą liczbę: ";
    cin >> first_number;

    cout << "Proszę podaj drugą liczbę: ";
    cin >> second_number;

    cout << "Proszę podaj trzecią liczbę: ";
    cin >> third_number;


// Checking if program stores numbers correctly. Comment out next line after checking.
    cout << "First: " << first_number << "  |  Second: " << second_number << "  |  Third: " << third_number;




    return 0;
}