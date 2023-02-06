#include<iostream>
using namespace std;
class SA
{
    protected:
        string name, sec;
        int rollno;
        float m1, m2, m3;
    public:
        void getdata()
        {
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter section: ";
            cin>>sec;
            cout<<"Enter roll no.: ";
            cin>>rollno;
            cout<<"Enter marks:\n";
            cin>>m1>>m2>>m3;
        }
};
class SB: public SA
{
    protected:
        float tm;
    public:
        void setdata()
        {
            tm=m1+m2+m3;
        }
};
class Student: public SB
{
    protected:
        float per;
    public:
        void percalc()
        {
            per=tm/3;
        }
        void display()
        {
            cout<<"Name: "<<name;
            cout<<"\nSection: "<<sec;
            cout<<"\nRoll No.: "<<rollno;
            cout<<"\nPercentage: "<<per;
        }
};
int main()
{
    Student S;
    S.getdata();
    S.setdata();
    S.percalc();
    S.display();
    return 0;
}