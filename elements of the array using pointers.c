#include<iostream>
using namespace std;
 int main()
 {
 	int i,data[5];
 	cout<<"Enter elements:";
 	for(i=0;i<5;i++)
 	{
 	    cin>>data[i];	
	 }
	 int*ptr=&data[0];
	 cout<<"You Entered:";
	 for(i=0;i<5;i++)
	 {
	 	cout<<*ptr<<"\n";
	 	ptr++;
	 }
 }
