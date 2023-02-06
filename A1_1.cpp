#include<iostream>
using namespace std;
int main()
{
    string name, add;
    char type;
    float amt, dis_rate, dis, net_amt;
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter address: ";
    getline(cin, add);
    cout<<"Enter amount of purchase: ";
    cin>>amt;
    cout<<"Enter type of purchase: ";
    cin>>type;
    switch (type)
    {
        case 'L':
            if(amt<=25000)
                dis_rate=0;
            else if(amt>25000 && amt<=57000)
                dis_rate=5;
            else if(amt>57000 && amt<=100000)
                dis_rate=7.5;
            else
                dis_rate=10;
            break;
        case 'D':
            if(amt<=25000)
                dis_rate=5;
            else if(amt>25000 && amt<=57000)
                dis_rate=7.6;
            else if(amt>57000 && amt<=100000)
                dis_rate=10;
            else
                dis_rate=15;
            break;
        default:
            cout<<"Invalid Type of Purchase\n";
            break;
    }
    dis=(dis_rate/100)*amt;
    net_amt=amt-dis;
    cout<<"--------------------------------------------";
    cout<<"\nName: "<<name;
    cout<<"\nAddress: "<<add;
    cout<<"\nNet Amount: "<<net_amt;
    return 0;
}