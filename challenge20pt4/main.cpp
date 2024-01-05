// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> formatString(const string &s) {
	vector<char> chars;

	for (int i {0}; i < static_cast<int>(s.size()); ++i) {
		if (s[i] == '\'' || s[i] == ' ' || s[i] == '!' || s[i] == '-' || s[i] == ',') {
			continue;
		}

		chars.push_back(toupper(s[i]));
	}

	return chars;
}

bool is_palindrome(const std::string& s) {
	vector<char> formattedString {formatString(s)};
	vector<char> formattedReverseString {formatString(s)};
	reverse(formattedReverseString.begin(), formattedReverseString.end());
	stack<char, vector<char>> strStack {formattedString};
	stack<char, vector<char>> strReverseStack {formattedReverseString};
	
	while (!strStack.empty()) {
		if (strStack.top() != strReverseStack.top()) {
			return false;
		}

		strStack.pop();
		strReverseStack.pop();
	}

    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}