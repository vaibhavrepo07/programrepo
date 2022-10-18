//Program to write Pointer and Arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5] = {10, 20 ,30 ,40, 50};
	int *p,i;
	p=arr;
	cout<<"Elements are"<<endl;
	int sum= 0;
	for(i=0 ;i<5 ;i++)
	{
		cout<<*p<<endl;
		sum=sum+ *p;
		p++;
	}
	cout<<"Total "<<sum<<endl;
	
	return 0;
}
