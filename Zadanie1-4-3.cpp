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


    // Third method 
    // Found on https://www.w3schools.com/cpp/default.asp
    // The max(x,y) function can be used to find the highest value of x and y:
    // Create a variable to store highest number

    int highest_value = max(first_number, second_number);

    highest_value = max(highest_value, third_number);


    // Found shorter version max(x, max(y, z)) but that would feel like cheating if used after finding answer submited by other person
    // int highest_value = max(first_number, max(second_number, third_number));
    // Keep it here for later


    // Printing answer

    cout << "Największą podaną liczbą było " << highest_value << "." << endl;    


    return 0;
}