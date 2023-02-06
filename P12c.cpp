//copy constructor
#include<iostream>
using namespace std;
class fact
{
    int n,f=1, x;
    public:
        fact()
        {
            cout<<"Enter no.: ";
            cin>>n;
        }
        fact(const fact &obj1)
        {
            x=obj1.n;
        }
        void factorial()
        {
            int i;
            for(i=1;i<=x;i++)
                f=f*i;
            cout<<"Factorial: "<<f;
        }
};
int main()
{
    fact obj;
    fact obj2 = obj;
    obj2.factorial();
    return 0;
}