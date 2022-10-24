//Program for String Copy the String 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char intput_str[10]="Vaibhav";
	char output_str[10];
	
	
	strcpy(output_str,intput_str);
	cout<<"Output_str:"<<output_str<<endl;
	strcpy(output_str,"Ingle");
	cout<<"Output_str"<<output_str<<endl;
	
	return 0;
	
}
