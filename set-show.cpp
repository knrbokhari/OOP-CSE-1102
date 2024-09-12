#include <iostream>
using namespace std;

class Person
{

    int id;
    string name;
    int age;
    string className;

public:
    void set(int id, string name, int age, string className)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->className = className;
    }
    void show()
    {
        cout << id << " " << name << " " << age << " " << className << endl;
    }
};

int main()
{
    Person s1, s2;

    s1.set(1, "Naeem", 24, "10");

    s2 = s1;

    s1.show();
    s2.show();

    return 0;
}