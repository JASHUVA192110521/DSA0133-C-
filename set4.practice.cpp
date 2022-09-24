#include<iostream>
#include<conio.h>
using namespace std;//AMPOLU RUBEN JASHUVA
class Vehicle
{
	int sp;
	float rpm;
	string s;
	public:
		virtual void p()
     	{
	    	cout<<"my favarite vehicle"<<endl;
	    }
	   	void k()
     	{
	    	cout<<"two and four wheelers\n";
	    }
	    void g(int sp,float rpm)
     	{
	    	cout<<"fz and ford speed limit="<<sp<<endl;
	    	cout<<"fz and ford rpm ="<<rpm<<endl;
	    }
	   
	    
};
class Two_wheelers:public Vehicle//two wheelers
{
	double rpm;
	int sp;
	public:
	    void p(){
			cout<<"vehicles like "<<endl;
		
		}
	    void k()
		{
		cout<<"pulser "<<sp<<endl;
		}
		void g(int sp, double rpm,int scap)
		{
			cout<<"Roles Royals speed limit ="<<sp<<endl;
			cout<<"Roles Royals rpm ="<<rpm<<endl;
			cout<<"Roles Royals sitting capacity ="<<scap<<endl;
		
		}
		
};
class Four_wheelers:public Vehicle//4 wheelers
{
	double sp,rpm;
	int  scap;
	public:
	void p()
	{
		cout<<"tata ac auto="<<endl;
	}
	void k()
	{
		cout<<"car"<<endl;
	}
	void g(double sp,double rpm,int scap)
	{
		cout<<"bus speed limit="<<sp<<endl;
		cout<<"bus tier cycle="<<rpm<<endl;
		cout<<"bus sitting capacity="<<scap<<endl;
	}

	
};
int main()
{	
    Vehicle *bptr; 
    Four_wheelers d1;   
	Two_wheelers d;
	d.p();
	bptr->k() ;
	bptr->g(60.999,3.9);
	d.g(300,9.34567,4);
	d1.g(70.0000567,27.76,75);
	
	
}
