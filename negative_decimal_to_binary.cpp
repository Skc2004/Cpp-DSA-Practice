#include<iostream>
using namespace std;

int main()
{
    int n,ans=0,i=0;
    cin >> n;
    while (n!=0)
    {
        int bit= n|0;
        ans=(bit*pow(10,i)+ans);
        i++;
        n=n>>1;
    }
    cout>> ans;
    return 0;
}