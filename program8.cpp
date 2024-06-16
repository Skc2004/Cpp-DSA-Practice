#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int d=0,l=0;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>=65 && s[i]<=90) || s[i]>=97 && s[i]<=122)
        {
            l++;
        }
        else if (s[i]>=48 && s[i]<=57)
        {
            d++;
        }
    }
    cout << "No. of letters: " << l << endl;
    cout << "No. of digits: " << d << endl;
    return 0;
}