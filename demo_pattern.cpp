#include<iostream>
using namespace std;

int main()
{
    int row=5,col=5;
    int a=1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<< endl;
    }
}