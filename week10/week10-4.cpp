#include <iostream>
#include <string>
using namespace std;

class Cat
{
public:
    string name;
    Cat(string _name)
    {
        name= _name;
    }
    void print()
    {
        cout << "My name is" << name << ".\n";
    }
};

int main()
{
    Cat cat1("�p��"), cat2("�p��");
    cat1.print();
    cat2.print();
}
