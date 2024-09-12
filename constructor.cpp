#include <iostream>
using namespace std;

class Person
{

    int id;
    string name;
    int age;
    string className;

public:
    Person(int id, string name, int age, string className);
    void show();
};

Person::Person(int id, string name, int age, string className)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->className = className;
}

void Person::show()
{
    cout << id << " " << name << " " << age << " " << className << endl;
}

int main()
{
    Person s1(1, "Naeem", 24, "10");

    Person s2 = Person(2, "Rayhan", 24, "10");

    s1.show();
    s2.show();

    return 0;
}