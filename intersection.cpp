#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6, 7};
    set<int> intersectionSet;

    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), 
                        inserter(intersectionSet, intersectionSet.begin()));
    for (int num : intersectionSet) cout << num << " ";

    return 0;
}