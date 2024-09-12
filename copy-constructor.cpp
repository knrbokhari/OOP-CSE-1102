#include <iostream>
using namespace std;

class Person
{

    int id;
    string name;

public:
    Person(int id, string name);
    Person(Person &s1);
    void show();
};

Person::Person(int id, string name)
{
    this->id = id;
    this->name = name;
}
Person::Person(Person &s1)
{
    this->id = s1.id;
    this->name = s1.name;
}
void Person::show()
{
    cout << id << " " << name << endl;
}

int main()
{
    Person s1(1, "Naeem");

    Person s2(s1);

    s1.show();
    s2.show();

    return 0;
}