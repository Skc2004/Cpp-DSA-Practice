#include<iostream>
using namespace std;

int main()
{
    int row,i=0,j;
    cout << "Enter the number of rows: ";
    cin >> row;
    char ch;
    while (i<row)
    {
        ch='A'+i;
        j=0;
        while (j<=i)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        i++;
        cout << endl;
    }
    return 0;
}