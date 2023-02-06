#include<iostream>
using namespace std;
class fib
{
    int num, n, x=0, y=1, z;
    public:
        fib()
        {
            cout<<"Enter a number: ";
            cin>>num;
        }
        fib(const fib &obj1)
        {
            n=obj1.num;
        }
        void fibonacci()
        {
            cout<<x<<'\t'<<y<<'\t';
            z=x+y;
            while(z<n)
            {
                cout<<z<<'\t';
                x=y;
                y=z;
                z=x+y;
            }
            
        }
};
int main()
{
    fib obj;
    fib obj2 = obj;
    obj2.fibonacci();
    return 0;
}