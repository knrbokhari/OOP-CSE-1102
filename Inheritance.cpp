#include <iostream>
using namespace std;

class Person
{
public:
    int id;
    string name;
};

class Student : public Person
{
public:
    int age;
    Student(int id, string name, int age)
    {
        this->id = id;
        this->name = name;
        this->age = age;
    };

    void show()
    {
        cout << id << " " << name << " " << age << endl;
    }
};

int main()
{
    Student s1(1, "naeem", 25);

    s1.show();
    return 0;
}