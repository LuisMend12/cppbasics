#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int size_;
    cin >> size_;
    
    vector<int> numbers(size_);

    for (int i  = 0; i < size_; ++i)
    {
        cin >> numbers[i];
    }


    vector<int>::iterator it;
    
    
    cout << "Sorted Vector: ";
    for (it = numbers.begin(); it != numbers.end(); ++it)
    {   
        sort(numbers.begin(), numbers.end());
        cout << *it << " ";
    }

    return 0;
}
