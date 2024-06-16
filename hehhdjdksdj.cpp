#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void getdata(float l,float w)=0;
    virtual void printdata()=0;
    virtual void area()=0;
};
class Rectangle:public Shape
{
    float length,breadth;
    public:
    void getdata(float l,float w)
    {
        length=l;
        breadth=w;
    }
    void printdata()
    {
        cout<<"Length="<<length<<endl;
        cout<<"Breadth="<<breadth<<endl;
    }
    void area()
    {
        cout<<"Area="<<length*breadth;
    }
};
int main()
{
    Rectangle r1;
    r1.getdata(2.6,9.8);
    r1.printdata();
    r1.area();
}