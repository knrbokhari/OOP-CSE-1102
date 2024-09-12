#include <iostream>
using namespace std;

class Person
{
public:
    int id;
    string name;
    int age;
    string className;

    inline void display()
    {
        cout << id << " " << name << " " << age << " " << className << endl;
    }
};

inline int isEven(int x)
{
    return (x % 2);
};

int main()
{
    Person s1;
    s1.id = 1;
    s1.name = "Naeem";
    s1.age = 24;
    s1.className = "10";

    s1.display();

    if (isEven(21) == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}