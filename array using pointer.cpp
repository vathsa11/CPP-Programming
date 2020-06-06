#include<iostream>
using namespace std;
int main()
{
	int a[5],i,*p;
	cout<<"Enter elements:";
	for(i=0;i<5;i++)
	cin>>a[i];
	cout<<"You Entered:";
	p=a;
	for(i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
