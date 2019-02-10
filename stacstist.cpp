/*Write a C++  p
rogram to inter N random values between 0 and 100 and get 
their mean 

and the standard deviation 
sd*/
//include library
#include<iostream>
#include<cmath>
using namespace std;

//define main function
int main(){
	//define variables
	int n;float s=0; float m,sd,q=0;
	//ask user how many values he want to give
	cout<<"How many values you want to give.";
	cin>>n;
	 //define array
	int ar[n];
	cout<<"Give the values.";
	//use loop to store the values the user want to give
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	//find the mean of the numbers given by the user by first adding them in the loop
	for(int x=0;x<n;x++){
		//add and store in s
		s=s+ar[x];
	}
	//mean =sumof the numbers/number
	m=s/n;
	//print the mean
	cout<<"Mean of the numbers you gave="<<m<<endl;
	//add the squre of the numbers and the mean by loop 
	for(int v=0;v<n;v++){
		//add and store in q
		q=q+pow((m-ar[v]),2);
	}
	//for sd=q/n-1
	sd=q/(n-1);
	cout<<"The sd="<<sd<<endl;
	return 0;
}
