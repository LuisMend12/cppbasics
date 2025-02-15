#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> first = {1, 3, 5, 7, 9};
	vector<int> second = {2, 4, 6, 8, 10};
	vector<int> result;

	merge(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result));;

	for (int num : result)
	{
		cout << num << " ";
	}

	return 0;
	
}
