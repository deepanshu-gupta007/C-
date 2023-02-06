#include<iostream>
using namespace std;
class Product
{
    protected:
        string name;
        int code;
        double amount;
    public:
        Product(){}
        Product(string n, int c, double p)
        {
            name=n, code=c, amount=p;
        }
        void show()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Code: "<<code<<endl;
            cout<<"Amount: "<<amount<<endl;
        }
};
class Sales: public Product
{
    protected: 
        int days;
        double tax, totamt, fine;
    public:
        Sales(){}
        Sales(int d, string n, int c, double p): Product(n, c, p)
        {
            days=d;
        }
        void compute()
        {
            tax=0.124*amount;
            if (days>30)
                fine=0.025*amount;
            else fine=0;
            totamt=amount+tax+fine;
        }
        void show()
        {
            cout<<"Total amount = "<<totamt<<endl;
        }
};
int main()
{
    Sales obj(32, "Deepanshu", 101, 75000);
    obj.compute();
    obj.Product::show();
    obj.show();
    return 0;
}