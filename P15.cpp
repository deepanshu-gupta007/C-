#include<iostream>
using namespace std;
class student
{
    int rollno, sub1, sub2, sub3;
    float percentage;
    string name, grade;
    public:
        void inputinfo(string n, int r, int m1, int m2, int m3)
        {
            rollno=r;
            sub1=m1;
            sub2=m2;
            sub3=m3;
            name=n;
        }
        void calcpercentage()
        {
            percentage=(sub1+sub2+sub3)/3;
            if (percentage>=90)
                grade='A';
            else if (percentage<90 && percentage>=80)
                grade='B';
            else if (percentage<80 && percentage>=60)
                grade='C';
            else if (percentage<60 && percentage>=40)
                grade='D';
            else if (percentage<40)
                grade='F';
        }
        void displayinfo()
        {
            cout<<"--------------------------------------\n";
            cout<<"Name: "<<name<<"\n";
            cout<<"Roll Number: "<<rollno<<"\n";
            cout<<"Percentage: "<<percentage<<"\n";
            cout<<"Grade: "<<grade<<"\n";
            cout<<"--------------------------------------\n";
        }
};
int main() 
{
    int rollno, sub1, sub2, sub3, x, n;
    string name;
    cout<<"Enter number of entries: ";
    cin>>n;
    student s[n];
    for (x=0; x<n; x++)
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll Number: ";
        cin>>rollno;
        cout<<"Marks 1: ";
        cin>>sub1;
        cout<<"Marks 2: ";
        cin>>sub2;
        cout<<"Marks 3: ";
        cin>>sub3;
        s[x].inputinfo(name, rollno, sub1, sub2, sub3);
        s[x].calcpercentage();
        s[x].displayinfo();
    }
    return 0;
}