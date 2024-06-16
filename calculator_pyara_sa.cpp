#include<iostream>
using namespace std;

int main()
{
    int a,b,res=0,c;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Enter your choice from the following: "<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Multiplication"<<endl;
    cout<<"3.Division"<<endl;
    cout<<"4.Modulus"<<endl;
    cout<<"5.Subtraction"<<endl;
    cin>> c;
    switch (c)
    {
    case 1:
        res=a+b;
        break;
    
    case 2:
        res=a*b;
        break;
    
    case 3:
        res=a/b;
        break;

    case 4:
        res=a%b;
        break;

    case 5:
        res=a-b;
        break;

    default:
        cout<<"WRONG CHOICE!!!"<<endl;
        break;
    }

    cout<<"The result is: "<<res;
}
