//Progarm for New and Delete

#include<bits/stdc++.h>
using namespace std;
class student 
{
	int roll_no;
	char first_name[15];
	char mid_name[15];
	char surname[15];
	int marks [15];
	int total ;
	float per;
	public:
		student (void)
		{
			total=0;
		}
		void getdata(void)
		{
			cout<<"Enter roll number"<<endl;
			cin>> roll_no;
			cout<<"Enter first name"<<endl;
			cin>>first_name ;
			cout<<"Enter Middle Name"<<endl;
			cin>>mid_name;
			cout<<"Enter marks of Five subjects"<<endl;
			cin>> surname;
			cout<<"Enter marks of five subjects"<endl;
			for(int i=0 ;i<5 ; i++)
			{
				cin>> marks[i];
				total = total+marks[i];
			}
			per = (float ) total /5.0;
		}
		void display(void)
		{
			cout<<"Roll Number:"<<roll_no<<endl;
			cout<<"Name :"<<first_name<<" "<< mid_name<< " "<< surname<<" "<<endl;
			cout<<"Total :"<<total<<endl;
			cout<<"Percentage :"<< per<<endl;
					}
};
int main()
{
	student s;
	s.getdata();
	s.display();
	
	return 0 ;
}
