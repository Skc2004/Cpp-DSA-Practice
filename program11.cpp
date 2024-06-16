#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s,n="";
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        n=n+(char)toupper(s[i]);
    }
    if(n=="JANUARY" || n=="MARCH" || n=="DECEMBER" || n=="MAY" || n=="JULY" || n=="AUGUST" || n=="OCTOBER")
    {
        cout << "Number of days: 31" << endl; 
    }
    else if (n=="APRIL" || n=="JUNE" || n=="SEPTEMBER" || n=="NOVEMBER")
    {
        cout << "Number of days: 30" << endl;
    }
    else if (n=="FEBRUARY")
    {
        cout << "Number of days: 28" << endl;
    }
    return 0;
}