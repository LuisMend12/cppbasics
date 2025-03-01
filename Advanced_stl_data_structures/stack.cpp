#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main() {
    stack<int> myStack;
    queue<string> myQueue;

    myStack.push(1);
    myStack.push(2);

    int topStack = myStack.top();
    myStack.pop();

    myQueue.push("apple");
    myQueue.push("banana");
    string frontQueue = myQueue.front();
    myQueue.pop();

    cout << "Stack elements: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();

    }


    cout << endl;

    cout << "Queue elements: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }

    cout << endl;

    return 0;
}