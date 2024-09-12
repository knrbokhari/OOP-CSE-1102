#include <iostream>
using namespace std;

class Person
{

    int count = 0;

public:
    Person()
    {
        ++count;
        cout << "Created " << count << endl;
    };

    ~Person()
    {
        --count;
        cout << "Destroyed " << count << endl;
    };
};

int main()
{
    Person s1, s2, s3, s4, s5;

    cout << "s6" << endl;

    Person s6;

    return 0;
}