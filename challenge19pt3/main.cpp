// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string term;
	string word;
	int termCount {0};
	int wordCount {0};
	ifstream file {"romeoandjuliet.txt", ios::in};

	if (!file) {
		cout << "Could not read file";
		return 1;
	}

	cout << "Enter a word: ";
	cin >> term;

	while (file >> word) {
		++wordCount;
		// Starting from C++23, can use `std::string::contains`
		// instead of `std::string::find` and `std::string::npos`
		if (term == word || (word.find(term) != std::string::npos)) ++termCount; 
	}
    
	cout << "Words searched: " << wordCount << '\n';
    cout << "Found " << termCount << " occurences of word: " << term << endl;
    return 0;
}

