#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "algorithms.h"

using namespace std;

template <typename T>
void display_vector(const vector<T>& items) {
	for (const T& item : items) {
		cout << item << " ";
	}
	cout << endl;
}

int main() {
	cout << "CUSTOM SEARCH, SORT, AND COLLECTION LIBRARY!!\n\n";

	vector<int> numbers = {29, 10, 15, 32, 44, 10, 32, 10};
	cout << "Numbers: ";
	display_vector(numbers);

	int target_num = 10;
	cout << "Occurrences of " << target_num << ": "
	     << count_occurrences(numbers, target_num) << "\n";
	cout << "Occurrences of 99: "
	     << count_occurrences(numbers, 99) << "\n";
	cout << "Max number: " << find_max(numbers) << "\n\n";

	vector<string> words = {"apple", "banana", "apple", "cherry", "banana", "apple"};
	cout << "Words: ";
	display_vector(words);

	string target_word = "apple";
	cout << "Occurrences of \"" << target_word << "\": "
	     << count_occurrences(words, target_word) << "\n";
	cout << "Max word: " << find_max(words) << "\n\n";

	vector<int> empty_nums;
	cout << "Testing find_max on an empty vector:\n";
	try {
		cout << find_max(empty_nums) << "\n";
	} catch (const out_of_range& e) {
		cout << "Caught expected exception: " << e.what() << "\n";
	}

	return 0;
}
