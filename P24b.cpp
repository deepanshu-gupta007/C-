#include<iostream>
using namespace std;
class Distance
{
    int feet, inch;
    public:
        Distance()
        {
            feet=0, inch=0;
        }
        void input()
        {
            cout<<"Enter feet and inch:\n";
            cin>>feet>>inch;
        }
        void display()
        {
            cout<<"Feet = "<<feet<<endl;
            cout<<"Inch = "<<inch<<endl;
        }
        friend Distance add(Distance &obj1, Distance &obj2, Distance &obj);
};
Distance add(Distance &obj1, Distance &obj2, Distance &obj)
{
    obj.feet=obj1.feet+obj2.feet;
    obj.inch=obj1.inch+obj2.inch;
    if (obj.inch>12)
    {
        obj.feet+=(obj.inch/12);
        obj.inch%=12;
    }
    return obj;
}
int main()
{
    Distance A, B, C;
    A.input();
    B.input();
    add(A, B, C);
    C.display();
    return 0;
}