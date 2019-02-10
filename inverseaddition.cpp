/*Write a C++  program to get the sum of the series
1-1/2+1/3-........+1/99-1/100*/
//library
#include<iostream>
#include<cmath>
using namespace std;
//define main fuction
int main(){
	//define variables.
	double a=1;
	//use loop to add multiple times
	for(int i=2;i<101;i++){
		//add and store
		a=a+(pow(-1,i+1)*pow(i,-1));	
	}
	//print the answer
	cout<<"The sum of the sequence is="<<a;
	return 0;
}
