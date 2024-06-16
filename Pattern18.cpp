#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i<=n)
    {
        int sp= n-i;
        j=i;
        while (sp>0)
        {
            cout << " ";
            sp--;
        }
        while (j>0)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}