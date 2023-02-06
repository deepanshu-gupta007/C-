#include<iostream>
using namespace std;
class student
{
    static int x;
    int rollno;
    string name;
    public: 
        void input(string n)
        {
            rollno=++x;
            name=n;
        }
        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No.: "<<rollno<<endl;
        }
        static void show()
        {
            cout<<"No. of students: "<<x<<endl;
        }
};
int student :: x=0;
int main()
{
    student s1, s2;
    s1.input("Raj");
    s2.input("Ram");
    s1.display();
    s2.display();
    student::show();
    return 0;
}