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
        complex operator+(complex C1)
        {
            complex C3;
            C3.real=C1.real+real;
            C3.img=C1.img+img;
            return C3;
        }
        complex operator-(complex C1)
        {
            complex C4;
            C4.real=real-C1.real;
            C4.img=img-C1.img;
            return C4;
        }
        void operator==(complex C1)
        {
            if(C1.real==real && C1.img==img)
                cout<<"True";
            else
                cout<<"False";
        }
        void show()
        {
            cout<<"Result = "<<real<<"+j"<<img<<"\n";
        }
};
int main()
{
    int i, x, y;
    complex C1(40, 15), C2(20, 10);
    complex C3=C1+C2;
    C3.show();
    complex C4=C1-C2;
    C4.show();
    C2.operator==(C1);
    return 0;
}