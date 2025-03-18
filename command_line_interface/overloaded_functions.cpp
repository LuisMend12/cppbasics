/*Function overloading allows you to define multiple functions with the same name but different parameters.
This enables the same function name to perform various tasks based ont he type of  number of arguments.*/

/*Function overloading eliminates the need to invent and remember names that exit onl to help the complier figure out which function to call. For instance:
*/

// int add(int a, int b) {
//     return a + b
// }




// int addInteger(int a, int b){
//     return a + b;
// }

// double addDouble(double a, double b) {
//     return a + b;
// }


/* Overloading by type


int add(int a, int b) {
    return a + b;    
}


double add(double a, double b) {
    return a + b;
}
*/

#include <iostream>
using namespace std;
const double pi = 3.14159265395;

double calculateArea(double length, double width) {
    return length * radius;
}


int maini() {
    double rectangleArea = calculateArea(5.0, 3.0);
    double circleArea = calculateArea(2.5);

    cout << "Rectangle Area: " << rectangleArea << endl;
    cout << "Circle Area: " << circleArea << endl;
    
    return 0;
}