#include<iostream>
using namespace std;

int main()
{
    int n,i=0,j;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i<n)
    {
        j=n-i-1;
        while (j>=0)
        {
            cout << "* ";
            j--;
        }
        i++;
        cout << endl;
    }
    return 0;
}