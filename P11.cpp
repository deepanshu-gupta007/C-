#include<iostream>
using namespace std;
class employee
{
    string name;
    int id;
    float gs, bs, da, ta, hra;
    public:
        employee()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter ID: ";
            cin>>id;
            cout<<"Enter basic salary: ";
            cin>>bs;
            da = 0.3*bs;
            ta=0.1*bs;
            hra=0.2*bs;
            gs=bs+ta+da+hra;
        }
        void show()
        {
            cout<<"----------------------------------";
            cout<<"\nName: "<<name;
            cout<<"\nID: "<<id;
            cout<<"\nBasic Salary: "<<bs;
            cout<<"\nGross Salary: "<<gs;
        }
};
int main()
{
    employee e;
    e.show();
    return 0;
}