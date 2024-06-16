#include<iostream>
using namespace std;

int main()
{
    int row,col,i=0,j,c=1;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter thr number of coloumns: ";
    cin >> col;
    while (i<row)
    {
        j=0;
        while (j<col)
        {
            cout << c << " ";
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}