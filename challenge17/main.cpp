#include <iostream>
#include <memory>
#include <vector>
#include "./Test/Test.h"
#include "./functions/functions.h"

using namespace std;

int main() {
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = functions::make();
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    functions::fill(*vec_ptr, num);
    functions::display(*vec_ptr);
    return 0;
}