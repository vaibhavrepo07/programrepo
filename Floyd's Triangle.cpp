#include<bits/stdc++.h>
using namespace std;
int main()
{
	int rows, number=1;
	
	cout<<"Numbers in a rows"<<endl;
	cin>>rows;
	
	for(int i=1;i<=rows ;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<number<<endl;
			++number;
		}
		cout<<endl;
	}
      return 0;	

}
