#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout << "Enter the value of n :- " << endl;
    cin >> n;
    int i=2;
    while(i<=n)
    {
        sum=sum+i;
        i+=2;
    }
    cout << "The sum is: " << sum << endl;
}