#include<iostream>
using namespace std;
class bank
{
    int acno, bal;
    string name, add;
    public:
        void inputinfo()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter address: ";
            cin>>add;
            cout<<"Enter balance: ";
            cin>>bal;
        }
        void acc_no(int x)
        {
            acno=1001+x;
        }
        void deposit()
        {
            int d;
            cout<<"Enter amount to be deposited: ";
            cin>>d;
            bal=bal+d;
        }
        void withdraw()
        {
            int w;
            cout<<"Enter amount to be withdraw: ";
            cin>>w;
            if (w<=bal)
                bal=bal-w;
            else
                cout<<"Withdraw is not possible\n";
        }
        void show()
        {
            cout<<"-------------------------------------";
            cout<<"\nName: "<<name;
            cout<<"\nAddress: "<<add;
            cout<<"\nAccount Number: "<<acno;
            cout<<"\nBalance: "<<bal;
            cout<<"\n-------------------------------------\n";
        }
        void address()
        {
            char ch;
            cout<<"--------------------------------------------\n";
            cout<<"Do you want to change the address(Y/N): ";
            cin>>ch;
            if (ch=='Y')
            {
                cout<<"New address: ";
                cin>>add;
            }
        }
};
int main()
{
    int acno, bal, i, n;
    string name, add;
    cout<<"Enter number of depositors: ";
    cin>>n;
    bank b[n];
    for(i=0; i<n; i++)
    {
        b[i].inputinfo();
        b[i].acc_no(i);
        b[i].deposit();
        b[i].withdraw();
        b[i].address();
        b[i].show();
    }
    return 0;
}