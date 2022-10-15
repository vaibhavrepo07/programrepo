//Progarm for find the sum of Number 1 to n using consturctor where value of n will be
//passed as a parameter to the constructor .The program should display sum .

#include<bits/stdc++.h>
using namespace std;
class add 
{
	int n, sum;
	public:
		add(int x)
		{
			n=x;
			sum=0;
			for(int i=1;i<=n;i++)
			{
				sum=sum+i;
			}
		}
		void display(void)
		{
			cout<<"sum ="<<sum;
		}
		
};
main()
{
	add a (10);
	a.display();
	
	return 0;
}
