//Program to demonstrate copy constructor
#include<iostream.h>
#include<conio.h>
class demo
{
  private:
	  int a,b;

  public:
	 demo(int x,int y);
	 void print();
};
demo::demo(int x,int y)
{
  a=x;
  b=y;
}
void demo::print()
{
  cout<<"Value of B is"<<a<<endl;
  cout<<"Value of B is"<<b<<endl;
}
demo::demo(demo &q)
{
  a=q.a;
  b=q.b;
}
void main()
{
  clrscr();
  demo d(10,20);
  d.print();
  demo d1(d);
  d1.print();
  getch();
}