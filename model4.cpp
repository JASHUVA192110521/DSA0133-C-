#include<iostream>
#include<conio.h>
using namespace std;
class RBI
{
	int minimum_interest_rate=4/100,minimum_balance=500,minimum_limit=20000;
};
class B:public RBI
{
	public:
		void k()
		{
			int minimum_interest_rate=4/100,minimum_balance=500,minimum_limit=20000;
			cout<<minimum_interest_rate;
			cout<<minimum_balance;
			cout<<minimum_limit;
		}
};
int main(){
	int minimum_interest_rate=4/100,minimum_balance=500,minimum_limit=20000;
	cout<<"minimum_interest_rateof RBI"<<minimum_interest_rate<<endl;
	cout<<"minimum_balance of RBI"<<minimum_balance<<endl;
	cout<<"minimum_limit of RBI="<<minimum_limit<<endl;
	cout<<"any other bank";
	B obj;
	obj.k();
	
	
}
