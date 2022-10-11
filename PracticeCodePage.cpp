//progarm to Print the sum of individual rows and columns of a matrix 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3],i,j,sumRow, sumCol;
	cout<<"Coding with the individual rows and columns in a matrix "<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			cin>> a[i][j];
		}
	} 
		for(i=0; i<3 ; i++)
		{
			sumRow=sumCol=0;
			for(j=0 ; j<3 ; j++)
			{
				sumRow=sumRow+a[i][j];
				sumCol=sumCol+a[j][i];
			}
		cout<<"sumRow = sumCol =0"<<sumRow<<sumCol<<endl;
		}
      return 0 ;
	}
}
