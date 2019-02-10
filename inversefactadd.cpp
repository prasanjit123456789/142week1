/*Write a C++ program to get the sum of the series
1-1/2!+1/3!-.......-1/1000! */
//library
#include<iostream>
#include<cmath>
using namespace std;
//define fact function
long long int fact(int i){
	//define variable
	long long int a=1;
	//use loop to multiply multiple times a sequence 
	for(int n=i;n>0;n--){
		//multiply and store
		a=a*n;
	}
	return a;
}
//define main function
int main(){
	//define variables
	double a=1;
	//use loop to add multiple times
	for(int i=2;i<101;i++){
		//call by fact function that will return the factorial of the number
	
		//add and store the inverse of the factorial of the numbers
		a=a+(pow(-1,i+1)*pow(fact(i),-1));
	}
	//print
	cout<<"The value of the sequence is="<<a;
	return 0;
}
