//Program for Inheritance and implement class name
#include<bits/stdc++.h>
using namespace std;
class student 
{
	protected :
		int roll_no;
		char name[20];
};
class engg_student : public student 
{
	char branch [10];
	public:
		void getdata(void);
		void putdata(void);
};
void engg_student :: getdata(void)
{
	cout<<"Enter roll Number "<<endl;
	cin>> roll_no;
	cout<<"Enter the Name"<<endl;
	cin>> name;
	cout<<"Enter the branch"<<endl;
	cin>> branch;
	
	}
	void engg_student :: putdata()
	{
		cout<<"Roll Number "<< roll_no<<endl;
		cout<< "Name "<< name<<endl;
		cout<<"Branch "<< branch<<endl;
	}
	int main()
	{
		engg_student es;
		es.getdata();
		es.putdata();
		
		return 0 ;
	}
