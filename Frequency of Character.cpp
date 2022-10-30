#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str="c++ programming is awesome";
	char checkCharacter= 'a';
	int count =0 ;
	
	for(int i=0 ;i<str.size();i++)
	{
		if(str[i]==checkCharacter)
		{
			++count;
		}
	}
	cout<<"Number of "<<checkCharacter<<"="<<count;
	
	return 0;
}
