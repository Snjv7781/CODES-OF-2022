#include<iostream>
using namespace std;


int main ()
{
	int n;
	cout<<"enter the time you want to print"<<endl;
	cin>>n;
	
	int i=1;
	
	while(i<=n)
	{
		if(i%2==0)
		cout<<"0"<<"\t";
		else
		cout<<"1"<<"\t";
		i++;
	}
	
	return 0;
}
