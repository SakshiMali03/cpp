//program to Demonstrate Destructor
#include<iostream.h>
#include<conio.h>
class Demo
{
   public:
	    Demo();      //Constructor Function
	    ~Demo();     //Destructor Function
};
Demo::Demo()
{
   cout<<"Consructor called"<<endl;
}
Demo::~Demo()
{
  cout<<"Desructor called"<<endl;
}
void main()
{
   clrscr();
   Demo D;
   getch();
}

















