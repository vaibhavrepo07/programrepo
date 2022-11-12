#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i , j , count=0;
	cin>> i;
	cout<<"Enter the Code with  Prime Number "<<endl;
	j=1;
	while(j<=i)
	{
		if(i%j==0)
		count++;
		
		j++;
	}
	if(count==2)
	cout<<"It's a Prime Number "<<endl;
	else
	cout<<"It's Not a Prime Number "<<endl;
	
	return 0;
	
}
