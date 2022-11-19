 //Program for Multidimensional Array
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	int a[5][5]={
	 { 8,3,8,3,2},
            { 5,6,4,3,2},
 	            { 6,5,6,5,6},
 	            { 7,8,7,5,4},
 	            { 9,9,8,4,3}
 };
 int i,j;
 int sum = 0;
 
 //Row sum 
 for(i=0;i<5;i++)
 {
 	for(j=0;j<5;j++)
 	{
 		sum+=a[i][j];
	 }
	 cout<<"The sum of Row Array is = "<<sum;
	 cout<<endl;
 }
 cout<<endl;
 //Column sum
 for(j=0;j<5;j++)
 {
 	for(i=0;i<5;i++)
 	{
 		sum+=a[j][i];
	 }cout<<"The sum of Column Array is ="<<sum;
	 cout<<endl;
}
	 return 0;
 }
