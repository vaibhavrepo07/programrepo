//Program for Multidimensional Array
#include<bits/stdc++.h>
#define MAX 50
using namespace std;
int main()
{
	 int a[MAX][MAX],b [MAX][MAX], product [MAX][MAX];
	 int arows,acolumns,brows,bcolumns;
	 int i,j,k;
	 int sum=0;
	 

cout<<"The row and Column of the matrix ";
cin>>rows>>columns;
}
cout<<"The Element of Matrix";
for(i=0;i<arrow;i++)
{
	for(j=0;j<acolumn;j++)
	{
		cin>>a[i][j];
	}
}
cout<<"The rows and columns of the matrix";
cin>>brows>>bcolumn;

if(brows!=acolumns)
{
	cout<<"Sorry! we cannot multiply the Matrices a and b"<<endl;
	
}else{
	cout<<"Enter the Element of Matrix";
	for(i=0;i<brows;i++)
	{
		 for(j=0;j<bcolumn;j++)
		 {
		 	cin>>b[i][j]
		 }
	}
}
cout<<endl;
for(i=0;i<arows;i++)
{
	for(j=0;j<column;j++)
	{
		for(k=0;k<brows;k++)
		{
			sum+=a[i][k]*b[k][j];
		}
		product [i][j]=sum;
		sum=0;
	}
}
//Printing the Array elements
cout<<"Resultant Matrix"<<endl;
for(i=0;i<arows;i++)
{
	for(j=0;j<bcolumn;j++)
	{
		cout<<" "<<product[i][j];
	}
	cout<<endl;
}
return 0;
}
