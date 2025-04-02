//this is another form of structs, bu thtis time this is nested
using namespace std;
struct Address {
    string street;
    string city;
    string country;
};


struct Employee {
    string name;
    int age;
    Address address;
}

struct company{
    string name;
    Employee CEO; // this is the same thing
    Address address; // this is the call of previous struct that we have created before
}