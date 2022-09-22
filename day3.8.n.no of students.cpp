#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	string name,add;
	int age;
	public:
		
		student(string x,string y,int z)
		{
			name=x;
			add=y;
			age=z;
		}
		student()
		{
			name="unknown";
			add="not available";
			age=0;
			
		}
		void p()
		{
			cout<<name<<endl;
			cout<<add<<endl;
			cout<<age<<endl;

		}
};
int main()
{
	string name,add;
	int age,n,i;
	cout<<"no of students=";
	cin>>n;
	while(i<n){
	cout<<"enter the name=";
	cin>>name;
	
	cout<<"enter the address=";
	cin>>add;
	
	cout<<"enter the age=";
	cin>>age;
	if(name=="0"&&add=="0"&&age==0){
		student s2;
		s2.p();
	}
	if(name!="0")
	{
		student s(name,add,age);
	    s.p();
	
	}
	
    i++;
	}
	return 0;
 }
