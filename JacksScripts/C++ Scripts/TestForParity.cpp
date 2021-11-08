#include <iostream>
#include <time.h>
#include <string>

#include "TestHeader.hpp"

using namespace std;

int test = 1;

void checkifodd(int num)
{

    //Odd case
    if ((num % 2) == 1)
    {
        cout << "Number is odd" << endl;
    }
    //Even case
    if ((num % 2) == 0)
    {
        cout << "Number is even" << endl;
    }
}

int main()
{

    srand(time(NULL));

    int randomnum = rand();

    cout << randomnum << endl;

    checkifodd(randomnum);

    //waitToClose();
}
