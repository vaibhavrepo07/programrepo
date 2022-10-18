//Program for Pointers of Objects
#include<bits/stdc++.h>
using namespace std;
class student 
{
	int roll,y,x ;
	char name[10];
	void getdata(int x ,char[] y)
	{
		roll=x;
		strcpy(name, y);
	}
};
void putdata()
{
	cout<<"Student name"<< name<<endl;
	cout<<"Student roll number"<< roll <<endl;
}
   int main()
   {
   	   student obj;
   	   student *p
   	   p= &obj;
   	   p-> getdata(101, "Vaibhav");
   	   p-> putdata();
   	   
   	   return 0;
   }
