#include<bits/stdc++.h>
using namespace std;
class time
{
	int h , m ;
    public:
    	void getdata(int ,int );
    	void putdata(void);
    	void sum(time,time);
    };
    
    void time:: getdata(int x , int y)
    {
    	h=x;
    	m=y;
	}
	void time :: putdata(void)
	{
		cout<< "The hour is = "<<h<<" "<<endl;
		cout<< "The Minute is = "<<m<< " "<<endl;
	}
	void time :: sum (time t1,time t2)
	{
		h= h/60;
		m=m%60;
		m= t1.m + t2.m;
		h= h+ t1.h + t2.h;
	}
	    
	     int main()
	     {
	     	time t1,t2,t3;
	     	
	     	t1.getdata(3,50);
	     	t2.getdata(3,55);
	        t3.sum(t1,t2);
	        t1.putdata();
	        t2.putdata();
	        t3.putdata();
	        
		 }
		 return 0;
	}
	
