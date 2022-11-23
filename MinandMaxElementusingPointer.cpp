#include<bits/stdc++.h>
using namespace std;


  void minMax(int arr[],int len, int *min, int *max)
  {
  	*min=*max=arr[0];
  	int i;
  	for(i=1;i<len;i++)
  	{
  		if(arr[i]>*max)
  		*max=arr[i];
  		if(arr[i]<*min)
  		*min=arr[i];
	  }
  }
  int main()
{
	int a[]={12,34,35,67,66,54,32,23};
	int max ,min;
	int len=sizeof(a)/sizeof(a[0]);
	minMax(a,len,&min,&max);
	cout<<min<<max<<endl;
	
	return 0;
}
