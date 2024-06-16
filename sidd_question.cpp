#include <iostream.h>
#include <bits/stdc++.h>
using namespace std;
class Box//Implement the class Box  
{
    private:
    int l,b,h;//l,b,h are integers representing the dimensions of the box
    public:
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
    Box(int length,int breadth,int height)
    {
        l=length;
        b=breadth;
        h=height;
    }
    Box(const Box& B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }
    bool operator<(Box& B)
    {
        if((l>B.l)||((b<B.b)&&(l==B.l))||((h<B.h)&&(b==B.b)&&(l==B.l)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void operator<<(Box&B)
    {
        cout<<B.l<<" "<<B.b<<" "<<B.h;
    }
};
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}