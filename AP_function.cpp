#include<iostream>
using namespace std;

int Ap(int n)
{
    int x=(3*n)+7;
    return x;
}

int main()
{
    int n;
    cout<< "Enter the value of n: ";
    cin>>n;
    cout<<endl;
    int y=Ap(n);
    cout<<"The nth term of the AP is : "<<y;
    return 0;
}