#include<iostream>
using namespace std;
class bank
{
    int id, acno, bal;
    string name, add, branch, gender;
    public:
        bank()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter address: ";
            cin>>add;
            cout<<"Enter branch: ";
            cin>>branch;
            cout<<"Enter gender: ";
            cin>>gender;
            cout<<"Enter id: ";
            cin>>id;
            cout<<"Enter account number: ";
            cin>>acno;
            cout<<"Enter balance: ";
            cin>>bal;
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
            cout<<"\nBranch: "<<branch;
            cout<<"\nGender: "<<gender;
            cout<<"\nID: "<<id; 
            cout<<"\nAccount Number: "<<acno;
            cout<<"\nBalance: "<<bal;
            cout<<"\n-------------------------------------\n";
        }
};
int main()
{
    int id, acno, bal, i;
    string name, add, branch, gender;
    bank b[5];
    for(i=0; i<5; i++)
    {
        b[i].deposit();
        b[i].withdraw();
        b[i].show();
    }
    return 0;
}