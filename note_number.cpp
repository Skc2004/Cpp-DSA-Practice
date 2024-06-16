#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the amount: ";
    cin>>n;
    int x=0,y=0,z=0,p=0,res=n;
    switch (1)
    {
        case 1:
            x=n/100;
            res=n-(x*100);
            if(res==0)
            {
                break;
            }
            else
            {
                n=res;
            }
        case 2:
            y=n/50;
            res=n-(y*50);
            if(res==0)
            {
                break;
            }
            else
            {
                n=res;
            }
        case 3:
            z=n/20;
            res=n-(z*20);
            if(res==0)
            {
                break;
            }
            else
            {
                n=res;
            }
        case 4:
            p=n/1;
            res=n-(p*1);
            if(res==0)
            {
                break;
            }
            else
            {
                n=res;
            }
        default:
            cout<<"Programmer check for loop";
            break;
    }
    cout<< endl;
    cout<<"Number of 100 rupees notes: "<<x<<endl;
    cout<<"Number of 50 rupees notes: "<<y<<endl;
    cout<<"Number of 20 rupees notes: "<<z<<endl;
    cout<<"Number of 1 rupees notes: "<<p<<endl;
    return 0;
}