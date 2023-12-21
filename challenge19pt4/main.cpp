// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string line {};
	int index {0};
	int leftSpacing {10};
    ifstream original {"romeoandjuliet.txt"};
	ofstream copyAllLineNumbers {"romeoandjuliet_all_line_numbers.txt"};

	if (!original || !copyAllLineNumbers) {
		cout << "Couldn't create or read files";
		return 1;
	}

	while (getline(original, line)) {
		copyAllLineNumbers << setw(leftSpacing) << left << index << line << endl;
		++index;
	}

	copyAllLineNumbers.close();
	original.close();

	index = 0;

 	ifstream input {"romeoandjuliet.txt"};
	ofstream copyValidLineNumbers {"romeoandjuliet_valid_line_numbers.txt"};

		if (!input || !copyAllLineNumbers) {
		cout << "Couldn't create or read files";
		return 1;
	}

	while (getline(input, line)) {
		if (line.empty()) {
			copyValidLineNumbers << endl;
			continue;
		}

		copyValidLineNumbers << setw(leftSpacing) << left << index << line << endl;
		++index;
	}

	copyValidLineNumbers.close();
	input.close();

	cout << "Successfully created 2 files";

    return 0;
}

