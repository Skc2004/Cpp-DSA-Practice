#include<iostream>
using namespace std;

int main()
{
    int j;
    for(int i=0;i<9;i++)
    {
        if(i<5)
        {
            for(j=0;j<=i;j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for(j=9-i-1;j>=0;j--)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}