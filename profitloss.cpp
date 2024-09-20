#include<iostream>
using namespace std;

int main()
{
	int cop,sop;
	cout<<"enter the cost price and selling price";
	cin>>cop>>sop;
	
	if(cop>sop)
	cout<<"expenses on ravi";
	else if(sop>cop)
	cout<<"profit"<<sop-cop;
	else
	cout<<"no profit no loss";
}
