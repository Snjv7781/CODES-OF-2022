#include<iostream>
using namespace std;

int main()
{
	int n ,i=1;
	cout<<"enter the time you want to print"<<endl;
	cin>>n;
	
	while(i<=n)
	{
		if(i%2==0)
		cout<<i-1;
		else
		cout<<i+1;
		i++;
	}
}
