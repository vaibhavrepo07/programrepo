//Progarm for Prime numbers of two interval
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int low ,high ,i ,flag;
	
	cout<<"Enter two numbers "<<endl;
	cin>>low >>high;
	
	cout<<"Prime numbers between "<<low<<"and"<<high<<endl;
	
	while(low<high)
	{
		flag=0;
		for(i=2;i<=low/2;i++)
		{
			if(low%1==0)
			{
				flag = 1;
				break ;
			}
		}
		if(flag==0)
		cout<<low<<endl;
		++low;
	}
	return 0;
}
