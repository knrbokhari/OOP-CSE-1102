#include <iostream>
using namespace std;

class Person
{
public:
    int id;
    string name;
    int age;
    string className;
};

int main()
{
    Person s1;
    s1.id = 1;
    s1.name = "Naeem";
    s1.age = 24;
    s1.className = "10";

    cout << s1.id << " " << s1.name << " " << s1.age << " " << s1.className << endl;

    return 0;
}