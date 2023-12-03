#include "./functions.h"

using namespace std;

unique_ptr<vector<shared_ptr<Test>>> functions::make() {
	return make_unique<vector<shared_ptr<Test>>>(
		vector<shared_ptr<Test>>() // empty vector
	);
}

void functions::fill(vector<shared_ptr<Test>> &vec, int num) {
	for(int n {0}; n < num; n++) {
		cout << "Enter data point [" << n+1 << "] : ";
		int inputNum;
		cin >> inputNum;

		vec.push_back(make_shared<Test>(inputNum));
	}
}

void functions::display(const vector<shared_ptr<Test>> &vec) {
	cout << "Displaying vector data" << "\n";
	cout << "=======================" << "\n";
	for (shared_ptr<Test> item:vec) {
		cout << item->get_test_data() << "\n";
	}
	cout << "=======================" << "\n";
}