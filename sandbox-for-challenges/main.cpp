// VSCode:
// Terminal -> Run Build task (Compile, Link, Create executable)... -> Open in integrated Terminal (main.exe) -> './main.exe'
// --- OR ---
// Run C/C++ file (play button)
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <cmath>
#include <algorithm>
#include <limits>
using namespace std;

// SECTION 12 CHALLENGE
int *apply_all(int const a1[], size_t a1S, int const a2[], size_t a2S) {
	int *return_array_ptr {new int[a1S * a2S]};
	int count {0};
	for(auto i {0}; i < a2S; ++i) {
		for(auto j {0}; j < a1S; ++j) {
			return_array_ptr[count] = a1[j] * a2[i];
			++count;
		}
	}
	return return_array_ptr;
}
int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
	delete [] results;
    cout << "Result: " << '\n';
    cout << results << '\n';
	cout << results_size;
    cout << endl;
    return 0;
}

// SECTION 10 CHALLENGE
// string crypt(string message, bool encrypt = true) {
// 	const string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
// 	const string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
// 	string returnMessage;
// 	for (char c : message) {
// 		auto index {encrypt ? alphabet.find(c) : key.find(c)};
// 		if (string::npos == index) {
// 			cout << "ERROR!!! - Included a non-alphabetical character" << '\n';
// 			returnMessage = "ERROR!!!";
// 			break;
// 		}
// 		encrypt ? returnMessage.push_back(key[index]) : returnMessage.push_back(alphabet[index]);
// 	}
// 	return returnMessage;
// }
// int main() {
// 	string message;
// 	cout << "Enter your secret message: ";
// 	cin >> message;
// 	cout << "Encrypting message..." << '\n';
// 	message = crypt(message);
// 	cout << "Encrypted message: " << message << '\n';
// 	cout << "Decrypting message..." << '\n';
// 	cout << "Decrypted message: " << crypt(message, false) << '\n';
// 	return 0;
// }

// SECTION 9 CHALLENGE
// void printInstructions() {
// 	cout << '\n';
// 	cout << '\n';
// 	cout << "=========================================="<< '\n';
// 	cout << "P - Print Numbers" << '\n';
// 	cout << "A - Add a number" << '\n';
// 	cout << "M - Display mean of the numbers" << '\n';
// 	cout << "S - Display the smallest number" << '\n';
// 	cout << "L - Display the largest" << '\n';
// 	cout << "Q - Quit" << '\n';
// 	cout << '\n';
// 	cout << "Enter your choice: ";
// }
// void calcStringList(vector<int> userList) {
// 	cout << "[ ";
// 	for (int num: userList) cout << num << " ";
// 	cout << "]" << '\n';
// }
// void calcMean (vector<int> userList) {
// 	int total {accumulate(userList.begin(),userList.end(),0)};
// 	cout << "Mean is: " << static_cast<double>(total) / userList.size() << '\n';
// }
// enum class SmallestLargest {
//     SMALLEST,
//     LARGEST
// };
// void calcSmallestLargest (vector<int> userList, SmallestLargest type) {
// 	int stored;
// 	for (int n : userList) {
// 		if (
// 			!stored
// 			|| (type == SmallestLargest::SMALLEST ? n < stored : n > stored)
// 		) {
// 			stored = n;
// 		}
// 	}
// 	string output = {type == SmallestLargest::SMALLEST ? "Smallest" : "Largest"};
// 	output += " is: ";
// 	cout << output << stored << '\n';
// }
// int main() {
// 	bool shouldRun {true};
// 	vector<int> userList;
// 	while(shouldRun) {
// 		printInstructions();
// 		char optionChosen;
// 		int addToUserList;
// 		cin >> optionChosen;
// 		switch (optionChosen) {
// 			case 'p':
// 			case 'P':
// 				if (userList.size() == 0) {
// 					cout << "[] - the list is empty" << '\n';
// 					break;
// 				}
// 				calcStringList(userList);
// 				break;
// 			case 'a':
// 			case 'A':
// 				cout << "Type an integer to add to the list: ";
// 				cin >> addToUserList;
// 				if (cin) {
// 					userList.push_back(addToUserList);
// 					cout << addToUserList << " added" << '\n';
// 					break;
// 				}
// 				cout << "Expected type of integer was not given" << '\n';
// 				/*
// 					Entering a non integer value when integer is expected causes cin stream to enter a "fail" state (failbit will be set).
// 					Subsequent attempts to read from cin will fail until the "fail" state is cleared.
// 				*/
// 				cin.clear(); // Clear the error state
// 				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
// 				break;
// 			case 'm':
// 			case 'M':
// 				if (userList.size() == 0) {
// 					cout << "Cannot calculate the mean of an empty list" << '\n';
// 					break;
// 				}
// 				calcMean(userList);
// 				break;
// 			case 's':
// 			case 'S':
// 				if (userList.size() == 0) {
// 					cout << "Cannot get smallest number of an empty list" << '\n';
// 					break;
// 				}
// 				calcSmallestLargest(userList, SmallestLargest::SMALLEST);
// 				break;
// 			case 'l':
// 			case 'L':
// 				if (userList.size() == 0) {
// 					cout << "Cannot get largest number of an empty list" << '\n';
// 					break;
// 				}
// 				calcSmallestLargest(userList, SmallestLargest::LARGEST);
// 				break;
// 			case 'q':
// 			case 'Q':
// 				cout << "Goodbye" << '\n';
// 				shouldRun = false;
// 				break;
// 			default:
// 				cout << "Unknown selection, Please try again" << '\n';
// 		}
// 	}
// 	return 0;
// }

// SECTION 8 CHALLENGE
// int remainingCents;
// int calcNumOfChangeType(int changeType) {
// 	const double inclusion {static_cast<double>(remainingCents) / changeType};
// 	if (inclusion <= 1.0) return 0;
// 	const int numOfChangeType {static_cast<int>(floor(inclusion))};
// 	remainingCents -= (numOfChangeType * changeType);
// 	return numOfChangeType;
// }
// int main() {
// 	const int centsInDollar {100};
// 	const int centsInQuarter {25};
// 	const int centsInDime {10};
// 	const int centsInNickel {5};
// 	const int centsInPenny {1};
// 	cout << "Enter an integer representing the number of cents" << '\n';
// 	cin >> remainingCents;
// 	cout << "Dollars: " << calcNumOfChangeType(centsInDollar) << '\n';
// 	cout << "Quarters: " << calcNumOfChangeType(centsInQuarter) << '\n';
// 	cout << "Dimes: " << calcNumOfChangeType(centsInDime) << '\n';
// 	cout << "Nickels: " << calcNumOfChangeType(centsInNickel) << '\n';
// 	cout << "Pennies: " << calcNumOfChangeType(centsInPenny) << '\n';
// 	return 0;
// }

// SECTION 7 CHALLENGE
// int main() {
// 	vector<int> vector1, vector2;
// 	vector1.push_back(10);
// 	vector1.push_back(20);
// 	cout << vector1[0] << ' ' << vector1[1] << '\n';
// 	vector2.push_back(100);
// 	vector2.push_back(200);
// 	cout << vector2[0] << ' ' << vector2[1] << '\n';
// 	vector<vector<int>> vector_2d;
// 	vector_2d.push_back(vector1);
// 	vector_2d.push_back(vector2);
// 	cout << vector_2d[0][0] << '\n';
// 	cout << vector_2d[0][1] << '\n';
// 	cout << vector_2d[1][0] << '\n';
// 	cout << vector_2d[1][1] << '\n';
// 	return 0;
// }

// SECTION 6 CHALLENGE
// int main() {
// 	const int smallRoom {25};
// 	const int largeRoom {35};
// 	const float taxRate {0.06};
// 	int smallRoomCount, largeRoomCount, cost;
// 	float total, tax;
// 	cout << "Number of small rooms to be cleaned?" << "\n";
// 	cin >> smallRoomCount;
// 	cout << "Number of large rooms to be cleaned?" << "\n";
// 	cin >> largeRoomCount;
// 	cost = (smallRoomCount * smallRoom) + (largeRoomCount * largeRoom);
// 	tax = taxRate * cost;
// 	total = cost + tax;
// 	cout << "Estimate for carpet cleaning..." << "\n";
// 	cout << "Number of small rooms: $" << smallRoomCount << "\n";
// 	cout << "Number of large rooms: $" << largeRoomCount << "\n";
// 	cout << "Price per small room: $" << smallRoom << "\n";
// 	cout << "Price per large room: $" << largeRoom << "\n";
// 	cout << "Cost: $" << cost << "\n";
// 	cout << "Tax: $" << tax << "\n";
// 	cout << "================================" << "\n";
// 	cout << "Total estimate: $" << total << "\n";
// 	cout << "This estimate is valid for 30 days" << "\n";
// 	return 0;
// }