#include <iostream>
#include <stack>
using namespace std;
int main() {
    std::string inputString;
    getline(std::cin, inputString); 

    std::stack<char> charStack;

    for (char c : inputString) {
        charStack.push(c);
    }

    inputString.clear();

    std::cout << "Reversed String: ";

    while (!charStack.empty()) {
        inputString.push_back(charStack.top());
        charStack.pop();
    }

    std::cout << inputString << endl;

    return 0;
}