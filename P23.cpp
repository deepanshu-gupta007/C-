#include <iostream>
using namespace std;
class A
{
    int n;
    public:
        void getNum(int x)
        {
            n=x;
        }
        void display()
        {
            cout<<"Number: " << n;
        }
        void operator!()
        {
            n=!n;
        }
};
int main()
{
    A obj;
    obj.getNum(10);
    cout<<"Before: ";
    obj.display();
    !obj;
    cout<<"\nAfter: ";
    obj.display();
    return 0;
}