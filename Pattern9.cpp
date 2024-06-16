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
        int val=i+1;
        while(j<=i)
        {
            cout << val << " ";
            val--;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}