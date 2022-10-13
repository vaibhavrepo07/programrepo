//Progarm for Reverse the String 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l, i;
	char s1[30],c ;
	cout<<"Enter the String "<<endl;
	gets(s1);
	l=strlen(s1);
	for(i=0;i<1/2;i++)
	{
		c=s1[i];
		s1[i]= s1[l-1-i];
		s1[l-1-i]=c;
		}
     cout<<s1<<endl;
     
     return 0;
}

