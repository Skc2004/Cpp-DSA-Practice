#include<iostream>
using namespace std;

int main()
{
    int n,i=0,j;
    cout << "Enter the number of rows: ";
    cin >> n;
    while (i<n)
    {
        j=0;
        char ch='A'+n-i-1;
        while (j<=i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}