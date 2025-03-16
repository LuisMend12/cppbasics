/*command line interface is a siple text-based interface that
 lets users interact with software by typing commands and receiving 
 responses.
 CLI programs are often used for sstem administration, automation, and development
 tasks.*/

 #include <iostream>
using namespace std;

 int main() {
    cout << "Enter any integer: " << endl;
    int num;
    cin >> num;
    cout << "The square of this number is:" << num*num << endl;


    return 0;
 }
