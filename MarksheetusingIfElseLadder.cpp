//Program for Making marksheet using else if ladder
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m1,m2,m3,m4 ,total ;
	float per ;
	total= m1+m2+m3+m4;
	per=total/4.0;
	cout<<"Total"<<total<<endl;
	cout<<"Percentage"<<per<<endl;
	
	if(per>95)
	cout<<"Great"<<endl;
	else if(per>85)
	cout<<"Bravo"<<endl;
	else if(per>75)
	cout<<"Fantabulos"<<endl;
	else if(per>65)
	cout<<"Amazing "<<endl;
	else if(per>55)
	cout<<"Good"<<endl;
	else if(per>45)
	cout<<"Well"<<endl;
	else if(per>35)
	cout<<"To be on the Edge "<<endl;
	else
	cout<<"You need to do Hardwork "<<endl;
	
	return 0;
	
}
