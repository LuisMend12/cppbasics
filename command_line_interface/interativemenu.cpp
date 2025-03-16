/* Interactive CLI applications often need menus to direct users through various 
functionalities. You can create these menus using loops and switch statements to show optinos
and respond to the user's choices*/


#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "!. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "#############" << endl;


        switch(choice) {
            case 1:
                cout << "You have chosen option 1" << endl;
                break;
            case 2:
                cout << "You have chosen option 2" << endl;
                break;
            case 3:
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}