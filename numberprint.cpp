#include<iostream>
using namespace std;

int main()
{
	
	int i=1,n;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(i<=n)
	{
		if (i%2==0)
		cout<<i-1;
		else
		cout<<i+1;
		
		i++;
		
	}
	return 0;
}
