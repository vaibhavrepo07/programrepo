//Program for Switch Case 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char op;
	int a, b ;
	cout<<"Coding with Switch Case "<<endl;
	cin>>a>>b;
	
	switch(op)
	{
		case 1:cout<<"The value of Addition "<<a+b<<endl;
		break;
		
		case 2: cout<<"The Value of Subtraction "<<a-b<<endl;
		break;
		
		case 3: cout<<"The Value of Multiplication "<<a*b<<endl;
		break;
		
		case 4: cout<<"The Value of Division"<<a/b<<endl;
		break;
		
		case 5: cout<<"The Value of Modulue"<< a%b<<endl;
		break;
		
		default :
			cout<<"Invalid Opertor "<<endl;
			break;
	}
	cout<<a<<" "<<op<<" "<< b <<endl;
	return 0;
	
}
