#include<bits/stdc++.h>
using namespace std;

int *findMid(int a[],int n)
{
	return &a[n/2];
}

 int main()
 {
 	int a[]={1,2,3,4,5};
 	
 	int n=sizeof(a)/sizeof(a[0]);
 	int *mid=findMid(a,n);
 	cout<<*mid<<endl;
 	
 	return 0;
 }
 
