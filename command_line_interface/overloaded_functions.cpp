/*Function overloading allows you to define multiple functions with the same name but different parameters.
This enables the same function name to perform various tasks based ont he type of  number of arguments.*/

/*Function overloading eliminates the need to invent and remember names that exit onl to help the complier figure out which function to call. For instance:
*/

// int add(int a, int b) {
//     return a + b
// }




int addInteger(int a, int b){
    return a + b;
}

double addDouble(double a, double b) {
    return a + b;
}