//Program for Strncmp
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[20]="Multicolor";
	char str2[20]="Multinatiol";
	int i ;
	
	i=strncmp(str1,str2,5);
	if(i==0)
	{
		cout<<"Strings are equal "<<endl;
		
	}
	else{
		cout<<"Strings are not equal "<<endl;
		
	}
	return 0;
	
}
