#include<iostream>
using namespace std;

int main()
{
    int rows,i=0,j;
    char ch='A';
    cout << "Enter the number of rows: ";
    cin >> rows;
    while (i<rows)
    {
        j=0;
        while (j<rows)
        {
            cout << ch << " ";
            j++;
        }
        ch++;
        i++;
        cout << endl;
    }
    return 0;
}