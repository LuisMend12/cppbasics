#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> sortedNumbers = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 8};

    auto uniqueEnd = unique(sortedNumbers.begin(), sortedNumbers.end());

    sortedNumbers.erase(uniqueEnd, sortedNumbers.end());

    cout << "Unique elements: ";

    for (int num : sortedNumbers) cout << num << " ";

    return 0;
}