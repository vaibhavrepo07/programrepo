#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[20];
	int i;
	
	cout<<"Enter Password"<<endl;
    cin.getline(s,20);
    i=strcmp(s,"access");
    if(i==0)
    cout<<"Correct Password"<<" "<<endl;
    else
    cout<<"Incorrect Password"<<" "<<endl;
    
    return 0;
}
