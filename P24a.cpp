#include<iostream>
using namespace std;
int main()
{
    int amt;
    cout<<"Enter amount: ";
    cin>>amt;
    cout<<"2000 Notes = "<<amt/2000;
    amt=amt%2000;
    cout<<"\n500 Notes = "<<amt/500;
    amt=amt%500;
    cout<<"\n100 Notes = "<<amt/100;
    amt=amt%100;
    cout<<"\n50 Notes = "<<amt/50;
    amt=amt%50;
    cout<<"\n20 Notes = "<<amt/20;
    amt=amt%20;
    cout<<"\n10 Notes = "<<amt/10;
    amt=amt%10;
    cout<<"\n5 Notes = "<<amt/5;
    amt=amt%5;
    cout<<"\n2 Notes = "<<amt/2;
    amt=amt%2;
    cout<<"\n1 Notes = "<<amt/1;
    amt=amt%1;
    return 0;
}