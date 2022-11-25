#include<bits/stdc++.h>
using namespace std;
int main()
{
	char src_str[30]="Hello Students";
	char dest_str[30];
	
	cout<<"src_str"<<src_str<<endl;
	strncpy(dest_str, src_str,5);
	cout<<"dest_str:"<<dest_str<<endl;
	
	strncpy(dest_str, " Copy First 13 ",13);
	cout<<"dest_str:"<<dest_str<<endl;
	
	return 0;
	
}
