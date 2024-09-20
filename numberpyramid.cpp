#include<iostream>
using namespace std;
int main()
{
	int n,j;
	cout<<"enter the number"<<endl;
	cin>>n;
	
	
	for(int i=1;i<=n;++i)
	{
		for(j=1;j<=i;++j)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
