#include<iostream>
using namespace std;
void prime(int);
int main()
{
    int num;
    cout<<"Enter limit: ";
    cin>>num;
    prime(num);
    return 0;
}
void prime(int n)
{
    int i, j;
    for(i=1; i<n; i++)
    {
        if (i==1)
            cout<<1<<'\t';
        else
        {
            int c=0;
            for(j=2; j<=i; j++)
            {
                if (i%j==0)
                    c++;
            }
            if (c==1)
                cout<<i<<'\t';
        }
    }
}