#include<iostream>
using namespace std;

int main()
{
    string p;
    cin >> p;
    bool fl=false,fa=false,fA=false,f0=false,fs=false;
    int l=p.length();
    if(l>=6 && l<=16)
    {
        fl=true;
    }
    for(int i=0;i<l;i++)
    {
        if(p[i]>=65 && p[i]<=90)
        {
            fA=true;
        }
        if(p[i]>=97 && p[i]<=122)
        {
            fa=true;
        }
        if(p[i]>=48 && p[i]<=57)
        {
            f0=true;
        }
        if (p[i]==64 || p[i]==35 || p[i]==36)
        {
            fs=true;
        }
    }
    if(fl==true && fa==true && fA==true && f0==true && fs==true)
    {
        cout << "Valid Password" << endl;
    }
    else
    {
        cout << "Not a Valid Password" << endl;
    }
    return 0;
}