#include<iostream>
using namespace std;
int main()
{
    int num, n, b=0, i=1, count=0;
    cout<<"Enter decimal number: ";
    cin>>num;
    n=num;
    while (n>0)
    {
      b+=i*(n%2);
      n/=2;
      i*=10;
    }
    cout<<"Binary form: "<<b;
    n=b;
    while (n>0)
    {
        if(n%10==1)
            count++;
        n/=10;
    }
    if (count%2==0)
        cout<<"\nNumber is evil";
    else
        cout<<"\nNumber is not evil";
    return 0;
}