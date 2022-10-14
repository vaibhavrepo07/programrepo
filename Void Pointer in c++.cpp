//Program for Void Pointer 
  // We can access all the data types just by using only Void Pointer .
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	void *vp;
 	
 	int a = 5 ;
 	float b = 1.50;
 	char ch = 'c';
 	
 	vp = &a;
 	cout<<" The Void Pointer"<<*(int*)vp<<endl;
 	
 	return 0;
  } 
