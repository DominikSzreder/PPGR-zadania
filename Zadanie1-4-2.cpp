// Napisz program do znajdowania największej
// liczby wśród trzech liczb, podanych przez
// użytkownika. (3 rozwiązania)


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


    // Second method 
    // I can shorten 'if/else' functions    
    // variable = (condition) ? expressionTrue : expressionFalse;

    // Create a variable to store first number

    int highest_value = (first_number > second_number) ? first_number : second_number;

    highest_value = (highest_value > third_number) ? highest_value : third_number;


    // Printing answer

    cout << "Największą podaną liczbą było " << highest_value << "." << endl;    

    return 0;
}