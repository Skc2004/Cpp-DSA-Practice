#include<iostream>
using namespace std;

int main()
{
    int i=1,j;
    int row,col;
    cout << "Enter the number of rows: " ;
    cin >> row ;
    cout << "Enter the number of coloumns: ";
    cin >> col;
    while (i<=row)
    {
        j=1;
        while (j<=col)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}