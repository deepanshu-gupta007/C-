#include<iostream>
using namespace std;
class bank
{
    string name;
    int ac, bal;
    public:
        void inputinfo()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter account number: ";
            cin>>ac;
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
            cout<<"\nAccount Number: "<<ac;
            cout<<"\nBalance: "<<bal;
        }
};
int main()
{
    int c;
    char ch='Y';
    bank b;
    b.inputinfo();
    cout<<"Press:\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\n";
    do
    {
        cout<<"Enter your choice:";
        cin>>c;
        switch (c)
        {
            case 1:
                b.deposit();
                break;
            case 2:
                b.withdraw();
                break;
            case 3:
                b.show();
                break;
            case 4:
                ch='N';
                break;
            default:
                cout<<"Invalid entry\n";
                break;
        }
        cout<<"Do you want to continue: ";
        cin>>ch;
    } while(ch=='Y');
    return 0;
}