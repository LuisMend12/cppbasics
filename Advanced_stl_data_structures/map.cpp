#include <iostream>
#include <map>

using namespace std;


int main() {

    map<string, int> studentAges;

    studentAges["Maria"] = 29;
    studentAges["Adam"] = 25;
    studentAges["David"] = 27;


    cout << "David's age: " << studentAges["David"];

    return 0;
}