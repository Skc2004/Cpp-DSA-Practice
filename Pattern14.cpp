#include<iostream>
using namespace std;

int main()
{
    int row,i=0,j;
    cout << "Enter the number of rows: ";
    cin >> row;
    while (i<row)
    {
        j=0;
        while (j<=i)
        {
            j++;
            cout << (char)('A'+i) << " ";
        }
        i++;
        cout << endl;
    }
    return 0;
}