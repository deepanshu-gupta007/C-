#include<iostream>
using namespace std;
class SA
{
    protected:
        string name, sec;
        int rollno, m1, m2, m3;
    public:
        void getdata()
        {
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter sec: ";
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
        float per;
    public:
        void setdata()
        {
            per=(m1+m2+m3)/3;
        }
};
class Student: public SB
{
    public:
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
    S.display();
    return 0;
}