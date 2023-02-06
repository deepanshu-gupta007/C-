#include<iostream>
using namespace std;
class Mammals
{
    public:
        void display()
        {
            cout<<"I am mammal\n";
        }
};
class MarineAnimals
{
    public:
        void display()
        {
            cout<<"I am a marine animal\n";
        }
};
class BlueWhale: public Mammals, public MarineAnimals
{
    public:
        void display()
        {
            cout<<"I belong to both the categories: Mammals as well as Marine Animals\n";
        }
};
int main()
{
    Mammals m1;
    MarineAnimals m2;
    BlueWhale b;
    cout<<"Case 1:-\n";
    m1.display();
    cout<<"Case 2:-\n";
    m2.display();
    cout<<"Case 3:-\n";
    b.display();
    cout<<"Case 4:-\n";
    b.Mammals::display();
    b.MarineAnimals::display();
    return 0;
}