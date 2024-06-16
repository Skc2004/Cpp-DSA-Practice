#include<iostream>
using namespace std;

int main()
{
    string s,rev="";
    cout << "Enter the string:- ";
    cin >> s;
    for(int i=s.length()-1;i>=0;i--)
    {
        rev=rev+s[i];
    }
    cout << rev << endl;
    return 0;
}