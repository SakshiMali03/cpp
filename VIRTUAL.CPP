#include<iostream.h>
#include<conio.h>
class base
{
  public:
	virtual void show();

};
clss derived:public base
{
   public:
	void show();
};

void base::show()
{
	cout<<"Base clas function called"<<endl;
}

