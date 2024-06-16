#include <iostream>
using namespace std;

int Fibo(int n)
{
    int a=0;
    int b=1;
    int x;
    if(n==0)
    {
        return a;
    }
    else if (n==1)
    {
        return b;
    }
    else
    {
        for(int i=2; i<=n;i++)
        {
            x=a+b;
            a=b;
            b=x;
            if(i==n) 
            {
                break;
            }
        }
        return x;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int x=Fibo(n);
    cout<<endl<<"The nth term of the fibonnaci series is as follows: "<<x<<endl;  
    return 0;
}