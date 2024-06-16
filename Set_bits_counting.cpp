#include<iostream>
using namespace std;

int count_bits(int n)
{
    int count = 0;
    while(n)
    {
        count += n&1;
        n>>=1;
    }
    return count;
}

int main()
{
    int a,b;
    cout<<"Enter the values of a and b respectively :  ";
    cin>>a>>b;
    int res=count_bits(a)+count_bits(b);
    cout<<endl<<"The total number of set bits in a and b are: "<<res<<endl;
    return 0;
}