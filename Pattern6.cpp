#include<iostream>
using namespace std;

int main()
{
    int i=0,j;
    while (i<4)
    {
        j=0;
        while (j<=i)
        {
            cout << i+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}