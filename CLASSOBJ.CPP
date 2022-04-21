#include <iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno;
	char name[20];
};
	void display()
	 {
	 cout<<"Enter Inside class";
	 }

	 void main()
	 {
	  student s;
	  clrscr();

	  cout<<"Enter the Rollno"<<endl;
	  cin>>s.rollno;

	  cout<<"Enter the Name"<<endl;
	  cin>>s.name;

	  cout<<"The rollno is \t"<<s.rollno<<endl;
	  cout<<"the name is \t"<<s.name;
	  getch();
}

