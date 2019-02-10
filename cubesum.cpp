/*Write a C++  program to get the sum of the series of the cubes by addition and substraction one after one*/
//library
#include<iostream>
#include<cmath>
using namespace std;

//define main function
int main(){
	//define variables
	long a=1;
	int n;
	//ask user till which number
	cout<<"Till which number you want to do the sequence.";
	cin>>n;
	//use loop to add or substrac multiple times
	for(int i=1;i<n+1;i++){
		//add or substract and store in a
		a=a+(pow(-1,i)*pow(((2*i)+1),3));
	}
	//print
	cout<<"The answer ofd the sequence is="<<a;
	return 0;
}
 
