#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

void printVector(vector<int> V) {
    for (auto& v : V) printf("%d ", v);
    printf("\n");
}

int main() {
    vector<int> v = {3, 4, 2, 1, 2, 3, 4, 5, 190};
    printVector(v);
    sort(v.begin(), v.end());
    printVector(v);

    return 0;
}