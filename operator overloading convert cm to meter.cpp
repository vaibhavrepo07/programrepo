//Progarm to write a progarm to convert lenght in cm  into meter 
#include<bits/stdc++.h>
using namespace std;
class Meter
{
	int meter;
	public:
		void getdata(void)
	    {
	    	cout<<"Enter Length in meter"<<endl;
	    	cin>> meter;
			}	
  operator int ()
  {
  	int centi ;
  	centi =meter *100;
  	return (centi);
  }
  };
  main()
  {
  	Meter m;
  	m.getdata();
  	cout<<"Lenght in Centimeter"<<endl;
  	int cm = m;
  	cout<< cm <<endl;
  	
 return 0;
  }


