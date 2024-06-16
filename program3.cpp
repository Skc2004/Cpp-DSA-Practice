#include<iostream>
using namespace std;

string reverse(string s);

int main()
{
    string s;
    cout << "Enter the string to be reversed : ";
    cin >> s;
    cout << reverse(s);
    return 0;
}

string reverse(string s)
{
    string rev="";
    for(int i=s.length()-1;i>=0;i--)
    {
        rev=rev+s[i];
    }
    return rev;
}