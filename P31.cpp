#include<iostream>
using namespace std;
class Student
{
    protected:
        string name, sec;
        int rollno, m1, m2, m3;
        float per;
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
        void setdata()
        {
            cout<<"Enter marks:\n";
            cin>>m1>>m2>>m3;
            per=(m1+m2+m3)/3;
        }
};
class SA: public Student
{
    public:
        void detail_display()
        {
            cout<<"Name: "<<name;
            cout<<"\nSection: "<<sec;
            cout<<"\nRoll No.: "<<rollno;
        }
};
class SB: public Student
{
    public:
        void marks_display()
        {
            cout<<"\nMarks 1: "<<m1;
            cout<<"\nMarks 2: "<<m2;
            cout<<"\nMarks 3: "<<m3;
            cout<<"\nPercentage: "<<per;
        }
};
int main()
{
    SA S1;
    SB S2;
    S1.getdata();
    S2.setdata();
    S1.detail_display();
    S2.marks_display();
    return 0;
}