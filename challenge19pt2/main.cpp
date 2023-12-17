// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

void drawLineBreak() {
	cout << "\n";
}

void drawHeadings(int width, const vector<string> &headings) {
	int index {0};

	for(string heading : headings) {
		cout
		<< setw(width / headings.size())
		<< (index == static_cast<int>(headings.size()) - 1 ? right : left)
		<< heading;

		++index;
	}

	drawLineBreak();
}

void drawLine(int width) {
	for(int i {0}; i < width; ++i) {
		cout << "-";
	}

	drawLineBreak();
}

void drawScores(int width, const vector<vector<string>> &scores, const vector<string> &headings) {
	const int section {width / static_cast<int>(headings.size())};

	for(vector<string> score : scores) {
		cout << setw(section) << left << score[0] << setw(section) << right << score[1];
		drawLineBreak();
	}
}

string calcScoreFromAnswerKey(string answerKey, string word) {
	int score {0};
	int index {0};
	for(char letter : answerKey) {
		if (letter == word[index]) {
			++score;
		}
		++index;
	}

	return to_string(score);
}

void calcScores(ifstream &file, vector<vector<string>> &scores, double &scoreTotal, string answerKey) {
	bool isName {true};
	int index {0};
	string word;

	while(file >> word) {
		vector<string> scoreVec;

		if (isName) {
			scoreVec.push_back(word);
			scores.push_back(scoreVec);
		} else {
			const string score {calcScoreFromAnswerKey(answerKey, word)};
			scores[index].push_back(score);
			scoreTotal += stoi(score);
			++index;
		}

		isName = !isName; 
	}
}

int main() {
	const int width {50};
	double scoreTotal {};
	const vector<string> titles {"Student", "Score"};
	vector<string> results {"Average Score"};
	string answerKey {};
	vector<vector<string>> scores {};

	try {
		ifstream file {"responses.txt", ios::in};

		if (!file) throw "Could not read file";

		file >> answerKey;
		calcScores(file, scores, scoreTotal, answerKey);
		
		drawHeadings(width, titles);
		drawLine(width);
		drawScores(width, scores, titles);
		drawLine(width);

		const string averageScore {to_string(scoreTotal / scores.size())};
		const size_t decimalPos = averageScore.find('.');
		const size_t twoDecimalPlace = decimalPos + 2;
		results.push_back(averageScore.substr(0, twoDecimalPlace));
		drawHeadings(width, results);

		return 0;
	} catch(string error) {
		cout << error;
		return 1;
	}
}

