#include<bits/stdc++.h>
using namespace std;

int main()
{
	 vector <int> a;
	 
	 a.push_back(2);
	 vector<int >b(a);
	 b[0]=5;
	 

	 vector<int>d(a.begin(), a.end());
	 d.push_back(5);
	 
	 cout<<a[1];
	 
	 
	 return 0;
}
