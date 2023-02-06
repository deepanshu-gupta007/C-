//parameterized constructor
#include<iostream>
using namespace std;
class fact
{
    int n,f=1;
    public:
        fact(int a)
        {
            n=a;
        }
        void factorial()
        {
            int i;
            for(i=1;i<=n;i++)
                f=f*i;
            cout<<"Factorial: "<<f;
        }
};
int main()
{
    int x;
    cout<<"Enter no.: ";
    cin>>x;
    fact obj(x);
    obj.factorial();
    return 0;
}