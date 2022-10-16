//Program for Recursion in it types of Recursion 
//Four types of Recursion 
//1) Direct 
//2) Indirect 
//3) Tail 
//4) Non-Tail

#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"fun1"<<fun(1)<<endl;
}
int fun1(int n)
{
	if(n<=1)
	return 1;
	else
	return n*fun2(n-1);
}

int fun2 (int n)
{
	if(n<=1)
	return 1;
	else 
	return n*fun1(n-1);
}
return 0;


}
















