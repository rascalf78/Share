#include <iostream>

using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{

private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void IntroduceYourself()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion()
    {
        if (Age > 30)
            std::cout << Name << " got promoted" << std::endl;
        else
            std::cout << Name << ", sorry no promotion" << std::endl;
    }
};

int main()
{
    Employee employee1("Jackson", "Chicken and co", 31);

    Employee employee2("Duck", "Duck and co", 5);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}