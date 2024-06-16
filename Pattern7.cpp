#include<iostream>
using namespace std;

int main()
{
    int i=0,j,c=1;
    while (i<4)
    {
        j=0;
        while (j<=i)
        {
            cout << c << " ";
            c++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}