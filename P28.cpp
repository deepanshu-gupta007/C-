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
class Student: public SA
{
    public:
        void display()
        {
            cout<<"Name: "<<name;
            cout<<"\nSection: "<<sec;
            cout<<"\nRoll No.: "<<rollno;
        }
};
int main()
{
    Student S;
    S.getdata();
    S.display();
    return 0;
}