//default constructor
#include<iostream>
using namespace std;
class fact
{
    int n,f=1;
    public:
        fact()
        {
            cout<<"Enter no.: ";
            cin>>n;
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
    fact obj;
    obj.factorial();
    return 0;
}