#include<iostream>
using namespace std;

int main()
{
    int row,i=0,j,val;
    cout << "Enter the number of rows: ";
    cin >> row;
    while (i<row)
    {
        j=0;
        val=i+1;
        while (j<=i)
        {
            cout << val << " ";
            j++;
            val++;
        }
        i++;
        cout << endl;
    }
    return 0;
}