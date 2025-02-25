#include <iostream>
using namespace std;


int main() {
    int numGuests;
    cout << "How mnay guests are you expecting? ";
    cin >> numGuests;

    string *guestList = new string[numGuests];


    for (int i = 0; i < numGuests; i++) {
        cout << "Enter the name of guest " << i+1 < ": ";
        cin >> guestList[i];
    }

    cout << "\nGuest List:\n";
    for (int i = 0; i < numGuests; i++) {
        cout << guestList[i] << "\n";
    }

    delete[] guestList;

    return 0;
}