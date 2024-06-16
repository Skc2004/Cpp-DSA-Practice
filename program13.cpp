#include<iostream>
using namespace std;

int main()
{
    int i,j,c=9;
    for(i=1;i<=9;i++)
    {
        for (j=9;j>=i;j--)
        {
            cout << c;
        }
        cout << endl;
        c--;
    }
    return 0;
}