#include<iostream>
using namespace std;
class Shape
{
    public:
        virtual void display()
        {
            cout<<"This is a shape\n";
        }
};
class Polygon: public Shape
{
    public:
        void display()
        {
            cout<<"Polygon is a shape\n";
        }
};
class Rectangle: public Polygon
{
    public:
        void display()
        {
            cout<<"Rectangle is polygon\n";
        }
};
class Triangle: public Polygon
{
    public:
        void display()
        {
           cout<<"Triangle is polygon\n";
        }
};
class Square: public Rectangle
{
    public:
        void display()
        {
            cout<<"Square is rectangle\n";
        }
};
int main()
{
    Shape *ptr[5];
    Shape sh;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square s;
    ptr[0]=&sh;
    ptr[1]=&p;
    ptr[2]=&r;
    ptr[3]=&t;
    ptr[4]=&s;
    int i;
    for(i=0; i<5; i++)
        ptr[i]->display();
    return 0;
}