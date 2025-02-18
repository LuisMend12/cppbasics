#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6, 7};
    set<int> unionSet;

    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), 
                inserter(unionSet, unionSet.begin()));

    for (int num : unionSet) cout << num << " ";

    return 0;
}