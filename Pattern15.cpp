#include<iostream>
using namespace std;

int main()
{
    int row,i=0,j;
    char ch='A';
    cout << "Enter the number of rows: ";
    cin >> row;
    while (i<row)
    {
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