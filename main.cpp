#include <iostream>
#include <string>
#include <vector>
#include "header.h"

using namespace std;

template <typename T>
void display_vector(const vector<T>& items) {
	for (const T& item : items) {
		cout << item << " ";
	}
	cout << endl;
}

int main() {
	cout << "CUSTOM SEARCH AND SORT LIBRARY!!\n";

	vector<int> numbers = {29, 10, 15, 32, 44};

	cout << "Original numbers: ";
	display_vector(numbers);

	cout << "LINEAR SEARCH\n";

	int target = 10;

	if (linear_search(numbers, target)) {
		cout << target << " was FOUND!!!!!!!\n";
	} else {
		cout << target << " not found\n";
	}

	cout << "SELECTION SORT\n";

	selection_sort(numbers);

	cout << "Sorted numbers: ";
	display_vector(numbers);

	cout << "\nBINARY SEARCH\n";

	target = 22;

	cout << target << (binary_search_custom(numbers, target) ? " was found\n" : " was not found\n");

	vector<string> names = {"Casey", "BJ", "Brandon", "Amber"};

	cout << "\nOriginal names: ";
	display_vector(names);

	cout << "Linear search for BJ: " << (linear_search(names, string("BJ")) ? "was found\n" : "was not found\n");

	selection_sort(names);

	cout << "Sorted names: ";
	display_vector(names);

	cout << "Binary search for Rachel: " << (binary_search_custom(names, string("Rachel")) ? "was found\n" : "was not found\n");

	return 0;
}
