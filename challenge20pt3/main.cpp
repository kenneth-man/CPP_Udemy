// Section 20
// Challenge 3  
// Maps and Sets

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

void display_words(const map<string, int> &words) {
    cout << setw(12) << left << "\nWord" << setw(7) << right << "Count" << endl;
    cout << "===================" << endl;

    for (auto pair: words) {
		cout << setw(12) << left << pair.first << setw(7) << right << pair.second << endl;
	}
}

void display_words(const map<string, set<int>> &words) {
    cout << setw(12) << left << "\nWord" << "Occurrences"<< endl;
    cout << "=====================================================================" << endl;

    for (auto pair: words) {
        cout << setw(12) << left << pair.first << left << "[ ";

        for (auto i: pair.second) {
			cout << i << " ";
		}

        cout << "]" << endl;
    }
}

string clean_string(const string &s) {
    string result;

    for (char c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }

    return result;
}

string trim_string(string s) {
	string copy {s};

	if (copy[0] == ' ') {
		copy.erase(0, 1);
	}

	int lastChar {static_cast<int>(copy.size()) - 1};

	if (copy[lastChar] == ' ') {
		copy.erase(lastChar, 1);
	}

	return copy;
}

vector<string> lineWords(const string line) {
	vector<string> words {};
	string word;
	string trimmedLine {trim_string(line)};

	int charNum {static_cast<int>(trimmedLine.size())};

	for (int i {0}; i < charNum; ++i) {
		if (i == charNum - 1) {
			word += trimmedLine[i];
			words.push_back(word);
			break;
		}

		if (trimmedLine[i] == ' ' && word.size() > 0) {
			words.push_back(word);
			word = "";
			continue;
		}

		if (trimmedLine[i] != ' ') {
			word += trimmedLine[i];
		}
	}

	return words;
}

void part1() {
    map<string, int> words;   
    string word;   
    ifstream in_file {"words.txt"};

    if (in_file) {
        while (in_file >> word) {
			string cleanWord {clean_string(word)};
			auto it {words.find(cleanWord)};

			if (it != words.end()) {
				it->second++;
			} else {
				words.emplace(make_pair(cleanWord, 1));
			}
		}

        in_file.close();
        display_words(words);
    } else {
        cerr << "Error opening input file" << endl;
    }
}

void part2() {
    map<string, set<int>> words;
    string line;
	int lineNum {1};
    string word;
    ifstream in_file {"words.txt"};

    if (in_file) {
		while (getline(in_file, line)) {
			vector<string> wordsVec {lineWords(line)};

			for (string w : wordsVec) {
				string cleanWord {clean_string(w)};
				auto it {words.find(cleanWord)};

				if (it != words.end()) {
					it->second.insert(lineNum);
				} else {
					set<int> s {lineNum};
					words.emplace(make_pair(cleanWord, s));
				}
			}

			lineNum++;
		}

		in_file.close();
		display_words(words);
    } else {
        cerr << "Error opening input file" << endl;
    }
}

int main() {
    //part1();
    part2();

    return 0;
}
