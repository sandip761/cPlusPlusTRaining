#include <iostream>

int main()
{
	using namespace std;

	int arr[] = { 1, 2, 3, 4, 5 };
	int* beg = &arr[0];
	int* end = &arr[5];

	while (beg != end) {
		cout << *beg << " ";
		++beg;
	}
	cout << endl;
	int* beg1 = std::begin(arr);
	int* end1 = std::end(arr);
	while (beg1 != end1) {
		cout << *beg1 << " ";
		++beg1;
	}
	//Range based for loop internal 
	auto range = arr;
	auto begin = std::begin(arr);
	int* end2 = std::end(arr);

}