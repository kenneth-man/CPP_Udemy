#include "./Test.h"
#include <iostream>

using namespace std;

Test::Test() : testData{0} {
	cout << "\tTest constructor (" << testData << ")" << endl;
}

Test::Test(int data) : testData {data} {
	cout << "\tTest constructor (" << data << ")" << endl;
}

int Test::get_test_data() const {
	return testData;
}

Test::~Test() {
	cout << "\tTest destructor (" << testData << ")" << endl;
}