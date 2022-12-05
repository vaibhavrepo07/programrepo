#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[20], str2[20], temp[20];
	cout<<"Enter the code"<<endl;
	
	cin>>str1>>str2;
	
	cout<<"String Before Swapping are"<<endl;
	cout<<"1"<<str1<<"2"<<str2<<endl;
 
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    
    cout<<"String After Swapping are:::"<<endl;
    cout<<"1"<<str1<<"2"<<str2<<endl;
    
    return 0;
}
