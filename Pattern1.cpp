#include<iostream>
using namespace std;

int main()
{
    int row,col,i,j;
    cout << "Enter the number of rows: " ;
    cin >> row;
    cout << "Enter the number of coloumns: " ;
    cin >> col;
    i=0;
    while(i<row)
    {
        j=0;
        while(j<col)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}