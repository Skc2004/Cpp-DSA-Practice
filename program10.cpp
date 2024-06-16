#include<iostream>
using namespace std;

int main()
{
    for(int i=100;i<=400;i++)
    {
        bool flag= true;
        int n=i;
        while (n!=0)
        {
            int r=n%10;
            if(r%2!=0)
            {
                flag=false;
            }
            n=n/10;
        }
        if (flag==true)
        {
            cout << i << ",";
        }
    }
    return 0;
}