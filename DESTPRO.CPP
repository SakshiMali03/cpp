#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int x,y;
	public:
		demo();
		demo(int a,int b);
		demo(demo &q);
		~demo();
		void show();
};
demo::demo(demo &q)
{
	x=q.x;
	y=q.y;

}

demo::demo()
{
	cout<<"Constructor called"<<endl;
}
demo::demo(int a,int b)
{
	x=a;
	y=b;
}
void demo:: show()
{
	cout<<"Value of X is:->"<<x<<endl;
	cout<<"Value of Y is:->"<<y<<endl;
}
demo::~demo()
{
	cout<<"Disctructer Called"<<endl;
}
void main()
{
	clrscr();
	demo d;
	demo d1(10,20);
	d1.show();
	demo w(d1);
	w.show();
	getch();
}