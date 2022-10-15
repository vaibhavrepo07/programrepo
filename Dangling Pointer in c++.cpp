//Dangling pointer in c++

//Dangling pointer is we use for free the memory .

#include<bits/stdc++.h>
using namespace std;
void main()
{
	int *ptr=(int *)malloc(sizeof(int ));
	*ptr=10;
	cout<<"Value of Dangling Pointer"<< *ptr<<endl;
	
	return 0 ;
}
