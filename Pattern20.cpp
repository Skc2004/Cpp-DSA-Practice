#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j,k;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i<=n)
    {
        j=i-1;
        while (j>0)
        {
            cout << " ";
            j--;
        }
        k=n-i;
        while (k>=0)
        {
            cout << "*";
            k--;
        }
        i++;
        cout << endl;
    }
    return 0;
}