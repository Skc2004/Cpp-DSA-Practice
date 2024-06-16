#include <bits/stdc++.h>
#include <iostream>
using namespace std;

template <class t>
t operations(t a,t b, int c)
{
    switch(c)
    {
        case 1:
            return a+b;
            break;

        case 2:
            return a-b;
            break;

        case 3:
            return a*b;
            break;

        case 4:
            return a/b;
            break;

        default:
            return 0;
            break;
    }
}

int main()
{
    auto a,b;
    int ch;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"1. Addition"<< endl;
    cout<<"2. Subtraction"<< endl;
    cout<<"3. Multiplication"<< endl;
    cout<<"4. Division"<< endl;
    cout<<"Enter your choice : ";
    cin>>ch;
    cout<<operations<int>(a,b,ch)<<endl;
    cout<<operations<double>(a,b,ch)<<endl;
}