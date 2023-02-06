#include<iostream>
using namespace std;
class employee
{
    string name, add;
    int id, age;
    float gs, bs, da, hra;
    public:
        void input()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter address: ";
            cin>>add;
            cout<<"Enter ID: ";
            cin>>id;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter basic salary: ";
            cin>>bs;
        }
        void calculate()
        {
            da = 0.07*bs;
            hra=0.1*bs;
            gs=bs+da+hra;
        }
        void show()
        {
            cout<<"----------------------------------";
            cout<<"\nName: "<<name;
            cout<<"\nAddress: "<<add;
            cout<<"\nID: "<<id;
            cout<<"\nAge: "<<age;
            cout<<"\nBasic Salary: "<<bs;
            cout<<"\nGross Salary: "<<gs;
        }
};
int main()
{
    employee e;
    e.input();
    e.calculate();
    e.show();
    return 0;
}