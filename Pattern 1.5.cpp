//Program for Pattern 
#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int n=5;
    int i, j ,s ;
    for(i=n;i>=1;i--)
    {
    	for(s=i;s<=n;s++)
    	{
    		cout<< " ";
		}
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			cout<<(char)(i+64);
			else
			cout<<i<<endl;
		}
		cout<<endl;
    }
    return 0;
    
	}

