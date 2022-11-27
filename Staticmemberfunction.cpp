#include<bits/stdc++.h>
using namespace std;
class temp
  {
  	 int no;
  	 static int count ;
  	 public:
  	 	void getval(int);
  	 	void putval(void);
  };
  
  void getval::temp(int x)
  {
  	no = x;
  	cout<< "Number is ="<<no<<endl;
  	count++;
  	
  }
  void putval(void)
  {
  	cout<<"The value is ="<<count<<endl;
  }
   
    int temp::count;
    
    int main()
    {
    	int t1,t2,t3;
    	t1.putval();
    	t2.putval();
    	t3.putval();
    	
    	t1.getval(100);
    	t2.getval(200);
    	t3.getval(300);
    	
    	t1.putval();
    	t2.putval();
    	t3.putval();
    	
    	return 0;
	}
  


