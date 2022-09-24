#include<iostream>
using namespace std;
class Marks
{
	int roll_number,marks,t;
	string name;
	public:
		
		void a(){
		    cout<<"enter name=";
		    cin>>name;
	    }
	   
	
};
class Physics:public Marks
{
	int m1;
	public:
		
	    int a(){
			
		    cout<<"physics marks=";
		    return 0;
		
		}
	
};
class Chemistry:public Marks
{
	int m2;
	public:
	
		int b(){
			cout<<"Chemistry marks=";
		    return 0;
		
			
		}
		
		
	
};
class Mathematics:public Marks
{
	int m3;
	public:
	
		int c(){
				cout<<"mathematics marks=";
		        return 0;
		
			
		}
		
		
	
};

int main()
{
	string a[10];
	int n,i,m1,m2,m3,t[i];
	int s1,s2,s3;
	double b;
	cout <<"enter no of student=";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"enter student name"<<i<<"=";
		cin>>a[i];
		cout<<"roll no ="<<i<<endl;
		int m1,m2,m3;
		Marks g;
		g.a();
		Physics obj;
		Chemistry obj2;
		Mathematics obj3;
		obj.a();
	    cin>>m1;
	    obj2.b();
	    cin>>m2;
	    obj3.c();
	    cin>>m3;
	    
	    
	    t[i]=m1+m2+m3;
		cout<<"total marks="<<t[i]<<endl;
		
	}
	for(i=1;i<=n;i++){
			b+=t[i];
		}
		cout<<"class average="<<b/n;
		
}
