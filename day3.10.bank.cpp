#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
	int a,b,c;
	public:

	
};
class Bank1:public Bank
{
	int a;
	public:
		int p(int a)
		{
			cout<<"Deposit in bank1="<<a<<"\n";
			return 0;
		
		}	    
};
class Bank2:public Bank1
{
	int b;
	public:
		
		int getbalance(int b)
		{
			cout<<"Deposit in bank2="<<b<<"\n";
			return 0;
			
		}	    
};
class Bank3:public Bank2
{
	int c;
	public:
		
		int t(int c)
		{
			cout<<"Deposit in bank3="<<c<<"\n";
			return 0;
			
		}	    
};


main()
{
	int a,b,c;
	cout<<"enter deposit amount in  bank1,2,3=";
	cin>>a;
	cin>>b;
	
	cin>>c;
	Bank3 obj;
	obj.p(b);
	obj.getbalance(a);
	obj.t(b);
	return 0;
 }
