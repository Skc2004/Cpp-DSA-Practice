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
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}