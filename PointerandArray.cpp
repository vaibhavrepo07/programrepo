#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={10,20,30,40,50};
	int *p;int *ptr;
	p=&a[0];
	
	cout<<*ptr<<endl;
	ptr=ptr+2;
	cout<<*ptr;
	ptr++;
	cout<<*ptr;
	ptr=ptr-2;
	cout<<*ptr;
	
	return 0;
}
