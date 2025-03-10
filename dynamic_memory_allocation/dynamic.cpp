#include <iostream>
using namespace std;

int main() {
    int array;

    cin >> array;


    int *arr = new int[array];

    for (int i = 0; i < array; i++) {
        arr[i] = i;
        cout << i << endl;
    }


    delete[] arr;
    
    return 0;
}