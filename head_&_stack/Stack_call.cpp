#include <iostream>
using namespace std;

void putOnShoes() {
    cout << "Puttong on shoes.\\n";
}

void putOnShirt() {
    cout << "Putting on shirt.\\n";
    putOnShoes();
    cout << "Finished putting on shirt.\\n";
}

void brushTeeth() {
    cout << "Brushing teeth.\\n";
    putOnShirt();
    cout << "Finished brushing teeth.\\n";
}

void wakeUp() {
    cout << "Waking up.\\n";
    brushTeeth();
    cout << "Finsihed waking up.\\n";
}

int main() {
    wakeUp();
    return 0;
}