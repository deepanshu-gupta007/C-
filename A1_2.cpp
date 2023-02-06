#include<iostream>
using namespace std;
int main()
{
    int type;
    float p, r, n, a;
    cout<<"1. Term Deposit\n2. Recurring Deposit\n";
    cout<<"Enter your choice: ";
    cin>>type;
    switch (type)
    {
        case 1:
            cout<<"Enter principal: ";
            cin>>p;
            cout<<"Enter rate of interest: ";
            cin>>r;
            cout<<"Enter time period in years: ";
            cin>>n;
            a=p*(1+(r/100))*n;
            cout<<"Maturity amount = "<<a;
            break;
        case 2:
            cout<<"Enter monthly installment: ";
            cin>>p;
            cout<<"Enter rate of interest: ";
            cin>>r;
            cout<<"Enter time period in months: ";
            cin>>n;
            a=(p*n)+(p*n*(n+1)/2*r/100*1/12);
            cout<<"Maturity amount = "<<a;
            break;
        default:
            cout<<"Invalid Choice.\n";
            break;
    }
    return 0;
}