#ifndef _FUNCTIONS_
#define _FUNCTIONS_
#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <ctype.h>
#include "../Test/Test.h"

using namespace std;

namespace functions {
	unique_ptr<vector<shared_ptr<Test>>> make();
	void fill(vector<shared_ptr<Test>> &, int);
	void display(const vector<shared_ptr<Test>> &);
}

#endif