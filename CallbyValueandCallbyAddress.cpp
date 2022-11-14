#include<bits/stdc++.h >
using namespace std;
void swap(int *, int *);
int main()
{
	int a,b;
	cout<<"Enter value of A and B"<<endl;
	cin>>a>>b;
	cout<<"Before swapping ";
	cout<<a<<b;
	
	swap(&a,&b);
	cout<<"After Swapping ";
	cout<<a<<b;
	
	return 0;
}
   void swap(int *x, int *y)
   {
   	int temp;
   	temp=*x;
   	*x=*y;
   	*y=temp;
   }
   
