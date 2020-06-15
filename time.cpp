#include<iostream>
using namespace std;
class time
{
	private: int h,m,s,ts;
	public: input();
			int convert()
			{
				ts=(h*3600)+(m*60)+s;
				return ts;
			}
			display(); 
};
time::input()
{
	cout<<"Enter time:"<<endl;
	cout<<"\tHours?";
	cin>>h;
	cout<<"\tMinutes?";
	cin>>m;
	cout<<"\tSeconds?";
	cin>>s;
}
time::display()
{
	cout<<"\tThe time is = "<<h<<":"<<m<<":"<<s<<endl;
	cout<<"\tTime in total seconds:"<<ts;
}
main()
{
	time t;
	t.input();
	t.convert();
	t.display();
}
