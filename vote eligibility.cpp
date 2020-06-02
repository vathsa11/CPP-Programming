#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age:\n";
	cin>>age;
	if(age<13)
	cout<<"You are a kid and not eligible to vote ";
	else if(age>=13&&age<18)
	cout<<"You are a TEEN and not eligible to vote. Just wait another "<<18-age<<" year(s)";
	else if(age>=18&&age<21)
	cout<<"You are eligible to vote but you are not an adult yet";
	else if(age>=21&&age<60)
	cout<<"You are an adult and eligible to vote";
	else
	cout<<"You are a senior citizen and eligible to vote";
	return 0;	
}
