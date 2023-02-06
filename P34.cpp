#include<iostream>
using namespace std;
class Employee
{
    public:
        int empc;
        string name;
        void getdata()
        {
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter employee code: ";
            cin>>empc;
        }
        void putdata()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Employee Code: "<<empc<<endl;
        }
};
class Fulltime: virtual public Employee
{
    protected:
        int rate, days, salary;
    public:
        void input()
        {
            cout<<"Enter daily rate: ";
            cin>>rate;
            cout<<"Enter number of days: ";
            cin>>days;
            salary=rate*days;
        }
        void display()
        {
            cout<<"Daily rate: "<<rate<<endl;
            cout<<"Number of days: "<<days<<endl;
            cout<<"Full time salary: "<<salary<<endl;
        }
};
class Parttime: virtual public Employee
{
    protected:
        int rate, hrs, salary;
    public:
        void input()
        {
            cout<<"Enter hourly rate: ";
            cin>>rate;
            cout<<"Enter number of hours: ";
            cin>>hrs;
            salary=rate*hrs;
        }
        void display()
        {
            cout<<"Hourly rate: "<<rate<<endl;
            cout<<"Number of hours : "<<hrs<<endl;
            cout<<"Part time salary: "<<salary<<endl;
        }
};
int main()
{
    int choice, ch=0, n, i;
    cout<<"Enter number of employee: ";
    cin>>n;
    Fulltime f[n];
    Parttime p[n];
    cout<<"Menu:-\n1. Accept details\n2. Display details\n3. Search employee\n4. Exit\n";
    do
    {
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();
        switch(choice)
        {
            case 1:
            {
                for(i=0; i<n; i++)
                {
                    f[i].getdata();
                    f[i].input();
                    p[i].input();
                    cin.ignore();
                }
                cout<<"-----------------------------------\n";
                break;
            }
            case 2:
            {
                for(i=0; i<n; i++)
                {
                    f[i].putdata();
                    f[i].display();
                    p[i].display();
                }
                cout<<"-----------------------------------\n";
                break;
            }
            case 3:
            {
                int x;
                cout<<"Enter employee code: ";
                cin>>x;
                for(i=0; i<n; i++)
                {
                    if (f[i].empc==x)
                    {
                        f[i].putdata();
                        f[i].display();
                        p[i].display();
                    }
                }
                cout<<"-----------------------------------\n";
                break;
            }
            case 4:
            {
                ch=1;
                break;
            }
            default:
            {
                cout<<"Invalid choice\n";
                break;
            }
        }
    }while(ch==0);
    return 0;
}