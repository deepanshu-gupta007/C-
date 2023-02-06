#include<iostream>
using namespace std;
class A;
class B;
class C
{
    int c;
    public:
        void set(int z)
        {
            c=z;
        }
        friend void greatest(A &p, B &q, C &r);
};
class B
{
    int b;
    public:
        void set(int y)
        {
            b=y;
        }
        friend void greatest(A &p, B &q, C &r);
};
class A
{
    int a;
    public:
        void set(int x)
        {
            a=x;
        }
        friend void greatest(A &p, B &q, C &r);
};
void greatest(A &p, B &q, C &r)
{
    if(p.a>q.b && p.a>r.c)
        cout<<"Greatest Number: "<<p.a;
    else if (q.b>r.c)
        cout<<"Greatest Number: "<<q.b;
    else
        cout<<"Greatest Number: "<<r.c;
}
int main()
{
    int x, y, z;
    cout<<"Enter numbers: \n";
    cin>>x>>y>>z;
    A p;
    p.set(x);
    B q;
    q.set(y);
    C r;
    r.set(z);
    greatest(p, q, r);
    return 0;
}