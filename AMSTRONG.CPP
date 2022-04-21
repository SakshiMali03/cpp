#include<iostream.h>
#include<conio.h>
void main()
{
	int no,result=0,rem,a;
	clrscr();
	cout<<"enter number";
	cin>>no;
	a=no;
	while(no>0)
	{
	rem=no%10;
	result=result+(rem*rem*rem);
	no=no/10;
	}
	if(a==result)
	{
	 cout<<"number is amstrong";
	}
	else
	{
	 cout<<"number is not amstrong";
	}
	getch();
}