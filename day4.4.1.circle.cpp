#include<iostream>
#include<cmath>
using namespace std;
class A
{
	int *r,d;
	float pi,a;
	public:
		
		void cal()
		{
			r=&d;
		
			cout<<"enter the number=";
			cin>>d;
			
			cout<<r;
			pi=3.14;
			a=pi*d*d;
		}
		p()
		{
			cout<<"Area of circle="<<a;
		}
};
int main()
{
	
	A *r;
	A t; 
	t.cal();
	t.p();
	return 0;

	
}
