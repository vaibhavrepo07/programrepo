//The function which call by itself its called Recursion 
#include<bits/stdc++.h>
using namespace std;
long fact (int );

int main()
{
	int no;
	cout<<"Enter a Number "<<endl;
	cin>>no;
	cout<<"Factorial of "<<no<<"is"<<fact(no);
	
	return 0;
}
  long fact(int n)
  {
  	if(n==0)
  	{
  		return 1;
	  }
	  return (n*fact(n-1));
  }
