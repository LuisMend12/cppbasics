#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> sortedNumbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int target = 7;
    bool found = binary_search(sortedNumbers.begin(), sortedNumbers.end(), target);

    if (found) cout << "Element " << target << " found." << endl;
    else cout << "Element " << target << " not found." << endl;

    return 0;
}