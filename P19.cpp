#include<iostream>
using namespace std;
class complex
{
    int real, img;
    public: 
        complex()
        {
            real=0, img=0;
        }
        complex(int r, int i)
        {
            real=r, img=i;
        }
        void show()
        {
            cout<<"Result = "<<real<<"+j"<<img<<"\n";
        }
        void add(complex C1, complex C2)
        {
            real=C1.real+C2.real;
            img=C1.img+C2.img;
        }
};
int main()
{
    int i, x, y;
    complex c[2];
    for(i=0; i<2; i++)
    {
        cout<<"Enter real and imaginary number: \n";
        cin>>x>>y;
        c[i]=complex(x, y);
        c[i].show();
    }
    complex c3;
    c3.add(c[0], c[1]);
    c3.show();
    return 0;
}