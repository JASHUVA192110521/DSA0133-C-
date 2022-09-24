#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float a,b,c,d;
	double agg,t;
	cout<<"enter the marks python=";
	cin>>a;
	cout<<"enter the marks c programming=";
	cin>>b;
	cout<<"enter the marks mathematics=";
	cin>>c;
	cout<<"enter the marks physics=";
	cin>>d;
	int r=0;
	if(a>100  || b>100||c>100||d>100||a<0||b<0||c<0||d<0){
		cout<<"error/dont enter invalid number"<<endl;
	    r=1;
	    return 0;
    }
    if(r==0){
	
	t=a+b+c+d;
	agg=t/4;

	cout<<"total="<<t<<endl;
	cout<<"aggregate"<<agg<<endl;
    if(agg>75)cout<<" distinction";
	
	else if(agg>=60 && agg<75)cout<<"grade is first division";
	else if(agg<=50 && agg>60)cout<<"grade is second division";
	else if(agg<=40 && agg>50)cout<<"grade is third division";
	else
	cout<<"fail";
    }
}
