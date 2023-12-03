#ifndef _TEST_
#define _TEST_
#include <string>
#include <vector>

using namespace std;

class Test {
private:
    int testData;
public:
    Test();
    Test(int);
    int get_test_data() const;
    ~Test();
};

#endif