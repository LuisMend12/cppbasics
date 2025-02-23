#include <iostream>
#include <vector>


using namespace std;

vector<int> sortedUnion(const vector<int>& vector1, const vector<int>& vector2) {
    vector<int> result;
    size_t i = 0, j = 0;
    
    while(i<vector1.size() && j < vector2.size()) {
        if (vector1[i] < vector2[j]) {
            if (result.empty() || result.back() != vector1[i]) result.push_back(vector1[i]);
            i++;
        } else if (vector1[i] > vector2[j]) {
            if (result.empty() || result.back() != vector2[j]) result.push_back(vector2[j]);
            J++;
        } else {
            if (result.empty() || result.back() != vector1[i]) result.push_back(vector1[i]);
            i++;
            j++;
        }
        
    }

    while (i < vector1.size()) {
        if (result.empty() || result.back() != vector1[i]) result.push_back(vector1[i]);
        i++;
    }

    while (j < vector2.size()) {
        if (result.empty() || result.back() != vector2[j]) result.push_back(vector2[j]);
        j++;
    }

    return result;
}
