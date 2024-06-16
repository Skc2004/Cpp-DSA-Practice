#include<iostream>
using namespace std;

int main()
{
    int row,i=0,j;
    char ch='A';
    cout << "Enter the number of rows and coloums: ";
    cin >> row;
    while (i<row)
    {
        j=0;
        while (j<row)
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