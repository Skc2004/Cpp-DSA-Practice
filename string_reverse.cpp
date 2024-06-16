#include <iostream>
using namespace std;

string rev(string s)
{
	int l=s.length();
	char t;
	for(int i=0;i<l/2;i++)
	{
		t=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=t;
	}
	return s;
}
int main()
{
	string name;
	cin>>name;
	cout<< rev(name);
	return 0;
}