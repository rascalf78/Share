#include <iostream>

using std::string;

class ducks
{
public:
    class inception
    {
    public:
        inception()
        { // inception constructor

            std::cout << "I ran" << std::endl;
        }
    };

    int Age;
    int Size;
    string Name;

    ducks(int age, int size, string name)
    { // ducks contructor
        Age = age;
        Size = size;
        Name = name;
    }

    void DuckAnalysis()
    {

        std::cout << "Age - " << Age << std::endl;
        std::cout << "Size - " << Size << std::endl;
        std::cout << "Name - " << Name << std::endl;
    }
};

int main()
{

    ducks duck1(1, 25, "Duckworth");
    duck1.DuckAnalysis();
    ducks::inception duckinception;
}