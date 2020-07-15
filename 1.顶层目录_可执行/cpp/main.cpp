#include <iostream>
#include <string>
#include <sstream>
#include "hello.h"
#include "world.h"

using namespace std;

int main(void)
{
    hello();
    world();

    int a = 100;
    string strTest;
    stringstream ss;

    //strTest = to_string(a) + " is a string."; // -std=c++11

    ss<<a;
    strTest = ss.str() + " is a string.";

    cout << "a is: " << a << endl;
    cout << "pszTest is: " << strTest << endl;

    return 0;
}
