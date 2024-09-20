#include<iostream>

using namespace std;

int main()
{
	int p,q,r;
	cout<<"enter the three number";
	cin>>p>>q>>r;
	
	if(p>q)
	{
		if(p>r)
		cout<<p<<"is max";
		else
		cout<<r<<"is max";
	}
	
	else
	{
		if (q>r)
		cout<<q<<"is max";
		else
		cout<<r<<"is max";
	}
	
}
