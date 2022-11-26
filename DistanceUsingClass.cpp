#include<bits/stdc++.h>
using namespace std;

class distance
{
	private:
		int feet ;
		float inches;
		public:
			void getDist()
			{
				cout<<"Enter Feet"<<endl;
				cin>>feet;
				cout<<"Enter Inches"<<endl;
				cin>>inches;
			}
			void showDist()
			{
				cout<<feet<<" "<<inches<<endl;
			}
};
int main()
{
	distance d1,d2;
	
	d1.getDist();
	d2.getDist();
	d1.showDist();
	d2.showDist();
	
	return 0;
}
