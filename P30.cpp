#include<iostream>
using namespace std;
class SA
{
    protected:
        string name, sec;
        int rollno;
    public:
        void getdata()
        {
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter sec: ";
            cin>>sec;
            cout<<"Enter roll no.: ";
            cin>>rollno;            
        }
};
class SB
{
    protected:
        int m1, m2, m3;
        float per;
    public:
        void setdata()
        {
            cout<<"Enter marks:\n";
            cin>>m1>>m2>>m3;
            per=(m1+m2+m3)/3;
        }
};
class Student: public SA, public SB
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