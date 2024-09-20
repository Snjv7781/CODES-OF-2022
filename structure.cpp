#include<iostream>
using namespace std;

struct gsfour
{
	int roomno;
	int monthsleft;
	char name;
};



int main()
{
	struct gsfour gs4;
	gs4.roomno=202;
	gs4.monthsleft=6;
	gs4.name=sanjeev;
	
	printf("%d",sizeof(gs4));
	cout<<gs4.roomno<<endl;
	cout<<gs4.monthsleft<<endl;
	cout<<gs4.name<<endl;
	
	
	return 0;
}
