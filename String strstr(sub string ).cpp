//Program for Strstr(Sub string )
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char *str= "International Company ",*sub="nation",*ptr;
	ptr=strstr(str,sub);
	cout<<"The substring "<<ptr<<endl;
	
	return 0;
}
