#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=10,y=20; 
	
	int *ptr;
	ptr=&x;
	cout<<"Value of x "<<*ptr<<endl;
	
	ptr=&y;
	
	cout<<"Value of y "<<*ptr<<endl;
	
	return 0;
}
