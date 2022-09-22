#include<iostream>
#include<conio.h>
using namespace std;
class degree
{
	string s;

	public:
	
		void getdegree()
		{
			cout<<"i got a degree\n";
		}
};
class A:public degree
{
	public:
		void show()
		{
			cout<<"i am postgraduate\n";
		}	    
};
class B:public A
{
	public:
		
		void display()
		{
			cout<<"I am undregraduate\n";
		}	    
};


main()
{
	
	B obj;
	obj.getdegree();
	obj.show();
	obj.display();
	return 0;
 }
