#include <iostream>

using namespace std;

int main()
{

    int x = 1;

    int *test;

    test = &x;

    cout << &x << endl;

    cout << test << endl;
}