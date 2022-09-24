#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;//AMPOLU RUBEN JASHUVA
int main()
{		
	int a,n,i,t,s=0,r=1;
	cout<<"enter the number=";
	cin>>n;
	while(n!=0)	{
		t=n%10;
		s=s*10+t;
		n=n/10;
		i++;
    }
	if(s==0){
		cout<<"invalid number"<<endl;
	}
	else
	cout<<"reverse number="<<s;	
	    
    
}
