// VSCode:
// Terminal -> Run Build task (Compile, Link, Create executable)... -> Open in integrated Terminal (main.exe) -> './main.exe'
// --- OR ---
// Run C/C++ file (play button)
#include <iostream>
#include <vector>
using namespace std;

int main() {

}

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
// 	int smallRoom {25};
// 	int largeRoom {35};
// 	float taxRate {0.06};
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