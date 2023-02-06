#include<iostream>
using namespace std;
class vehicles
{
    static int x;
    int y;
    public:
        void input()
        {
            cout<<"Enter Y: ";
            cin>>y;
        }
        static void display()
        {
            cout<<"Static X = "<<x;
            //cout<<"Y = "<<y;  Not permitted
        }
};
int vehicles::x=10;
int main()
{
    vehicles v;
    v.input();
    v.display();
    return 0;
}