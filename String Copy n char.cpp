//Program for Copy 'n' characters
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char src_str[30]="Hello Student";
	char dest_str[30];
	
	cout<<"Src_str:"<<src_str<<endl;
	strncpy(dest_str,src_str, 5);
	cout<<"Dest_str:"<<dest_str<<endl;
	
	strncpy(dest_str,"Copy First 13 Characters",13);
	cout<<"dest_str:"<<dest_str<<endl;
	
	return 0;
}
