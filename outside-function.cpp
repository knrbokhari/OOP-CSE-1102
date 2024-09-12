#include <iostream>
using namespace std;

class Person
{
public:
    int id;
    string name;
    int age;
    string className;

    void display();
};

void Person::display()
{
    cout << id << " " << name << " " << age << " " << className << endl;
}

int main()
{
    Person s1;
    s1.id = 1;
    s1.name = "Naeem";
    s1.age = 24;
    s1.className = "10";

    s1.display();

    return 0;
}