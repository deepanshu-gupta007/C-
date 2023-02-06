#include<iostream>
using namespace std;
class apple
{
    protected:
        int a;
    public:
        void getdata()
        {
            cout<<"Enter number of apples: ";
            cin>>a;
        }
};
class mango
{
    protected:
        int b;
    public:
        void setdata()
        {
            cout<<"Enter number of mangoes: ";
            cin>>b;
        }
};
class fruit: public apple,public mango
{
    public:
        void putdata()
        {
            getdata();
            setdata();
            cout<<"Total number of fruits: "<<a+b<<endl;
        }
};
int main()
{
    fruit obj;
    obj.putdata();
    return 0;
}