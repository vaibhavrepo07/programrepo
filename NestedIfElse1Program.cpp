//Program for Nested If Statement
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int a, b ,c;
      cin>> a>>b>>c;
      
      cout<<"Coding with If Else Statement"<<endl;
      if(a>b)
      {
      	
      	if(a>c)
      	{
      		cout<<"Enter the Coding "<<endl;
		  }
		  else
		  {
		  	cout<<"The value of a is "<<endl;
		  }
		  else
		  {
		  	if(c>a)
		  	{
		  		cout<<"The value of c is "<<endl;
			  }
			  else
			  {
			  	cout<<"The value of b is "<<endl;
			  }
		  }
      	cout<<"The Value of A is greater"<<endl;
	  }
	  return 0;
}

