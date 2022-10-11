//Program to print sum of Individual Rows and Columns
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3], i, j,sumRow, sumCol;
	cout<<"Enter the Matrix"<<endl;
	for(i=0 ;i<3 ;i++)
	{
		for(j=0 ;j<3; j++)
		{
			cin>> a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
	  sumRow=sumCol=0;
	  for(j=0;j<3 ;j++)
	  {
	  	sumRow=sumRow+a[i][j];
	  	sumCol=sumCol+a[j][i];
	  }
	cout<<"SumRow and SumCol"<<sumRow<<sumCol<<endl;

	}
       return 0 ;
}
