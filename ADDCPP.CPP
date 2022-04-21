#include<iostream.h>
#include<conio.h>
class abc
{
	int n1,n2,n3;

 public:
	void get();
	void add();
	abc()
	{
	 n1=10;
	 n2=20;
	}
};
void abc::get()
{
	cout<<"Enter the value of N1,n2";
	cin>>n1>>n2;
}
void abc::add()
{
	n3=n1+n2;
	cout<<n3;
}
void main ()
{
	clrscr();
	abc a;
	a.get();
	a.add();
	getch();
}