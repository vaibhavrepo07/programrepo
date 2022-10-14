//Write a program of for loop without condition 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i , j ;
	for( i=1,j=0 ;  ; i++)   //If we not wirte the condition then it will go into infinite loop.
	{
		cout<< i << j <<endl;
	}
	return 0 ;
}
