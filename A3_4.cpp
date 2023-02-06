#include<iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"Base Default Constructor\n";
        }
};
class Derived: public Base
{
    public:
        Derived()
        {
            cout<<"Derived Default Constructor\n";
        }
        Derived(int x)
        {
            cout<<"Derived Parameterized Constructor\n";
        }
};
int main()
{
    Base b;
    Derived d1;
    Derived d2(10);
    return 0;
}