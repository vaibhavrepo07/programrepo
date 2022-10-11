//Program to print the multiplication of 2 matrix 
#include<bits/stdc++.h>      //Column of 1st matrix = Rows of 2nd Matrix 
#define N 50 
int main()                   //A base m*n  *  B base p*q = if(n==p) then it can be multiply
{
	int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
	cout<<"Enter the Rows and Columns for First Matrix"<<endl;
	cin>> m >> n ;
	cout<<"Enter First Matrix"<<endl;
	for(i=0 ;i<m ;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter rows and columns for Second Matrix "<<endl;
	cin>> p>> q;
	cout<<"Enter the Second Matrix"<<endl;
	for(i=0 ;i<q;i++)
	{
		for(j=0 ;j<q;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"First Matrix "<<endl;
	for(i=0 ;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<endl;
		}
	}
	cout<<endl;
}
cout<<"Second matrix is :"<<endl;
for(i=0;i<p;i++)
{
	for(j=0;j<q;j++)
	{
		cout<<b[i][j]<<endl;
	}
}
cout<<endl;
}
if(n!=p)
{
	cout<<"Can Not Multiply"<<endl;
}
else 
{
	for(i=0;i<m;i++)
	{
		for(j=0 ;j<q;j++)
		{
			sum=0;
			for(k=0;k<m;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
			
		}
	}
	cout<<"Multiplication is : "<<endl;
	for(i=0;i=0;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<c[i][j]<<endl;
		}
		cout<<endl;
	}
	return 0 ;
}
