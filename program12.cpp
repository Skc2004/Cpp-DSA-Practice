#include<iostream>
using namespace std;

int main()
{
    int a,b,sum=0;
    cin >> a >> b;
    sum=a+b;
    if(sum>=105 && sum<=200)
    {
        cout << "Sum : 200" << endl; 
    }
    else
    {
        cout << "Sum : " << sum << endl;
    }
    return 0;
}