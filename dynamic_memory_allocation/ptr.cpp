#include <iostream>
using namespace std;


int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;


    int *arr = new int[size];

    for (int i  = 0; i < size; i++) {
        arr[i] = i * 2;
        cout << "Array element " << i << " is " << arr[i] << endl;
    }


    delete[] arr;

    return 0;
}