#include<iostream>
using namespace std;
class student
{
    string name;
    int rollno, m1, m2, m3, tm;
    public:
        void inputinfo()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter roll number: ";
            cin>>rollno;
            cout<<"Enter marks in three subjects:\n";
            cin>>m1>>m2>>m3;
        }
        void outputinfo()
        {
            cout<<"---------------------------------------";
            cout<<"\nName: "<<name;
            cout<<"\nRoll No.: "<<rollno;
            cout<<"\nMarks 1: "<<m1;
            cout<<"\nMarks 2: "<<m2;
            cout<<"\nMarks 3: "<<m3;
            tm=m1+m2+m3;
            cout<<"\nTotal marks: "<<tm;
        }
};
int main()
{
    student s;
    s.inputinfo();
    s.outputinfo();
    return 0;
}