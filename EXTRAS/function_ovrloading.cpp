#include<iostream>
using namespace std;
class Area{
    double pi=3.14;
    int l,b,r;
    public:
        void area()
        {
            cout<<"Printing areas:"<<endl;
        }
        void area(int l, int b);
        void area(int r)
        {
            int area = pi*r*r;
            cout<<"The area of circle is: "<<area<<endl;
        }

};

//Use of scope resolution operator
void Area::area(int l,int b)
{
     int area = l*b;
    cout<<"Area of recangle: "<<area<<endl;
}

int main()
{
    Area a;
    a.area();
    a.area(5,10);
    a.area(15);
    return 0;
}