#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
	string array;
	cout << "Enter binary number: "; cin >> array;

	vector<int>::iterator it;

	for (it = array.begin(); it != array.end(); ++it)
	{
		cout << *it << " ";
	}

	return 0;
}
