//Program for Find GCD using While loop
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2;
     
	 cout<<"Enter two Number "<<endl;
	 cin>> n1>> n2;
	 
	 while(n1!=n2)
	 {
	 	if(n1>n2)
	 	 n1-=n2;
	 	 else
	 	 n2-=n1;
		 }	
		 cout<<"HCF = "<< n1;
		 return 0;
}
