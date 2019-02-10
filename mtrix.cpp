/*Write a C++  program to inter the elements of the two matrix A and B 
and their sum and difference where 

	   1 2 3	3 1 3
	A=-1 0 3  ,B=  -1 0 -2
	   7 4 1        0 4 1

*/
//define library
#include<iostream>
using namespace std;

//define main function
int main(){
	//define variables
	int A[3][3],B[3][3],sum[3][3],dif[3][3];
	//give the values in the array A
	A[0][0]=1;A[0][1]=2;A[0][2]=3;A[1][0]=-1;A[1][1]=0;
	A[1][2]=1;A[2][0]=1;A[2][1]=1;A[2][2]=1;
	//the values of array B
	B[0][0]=3;B[0][1]=1;B[0][2]=3;B[1][0]=-1;B[1][1]=0;
	B[1][2]=-2;B[2][0]=0;B[2][1]=4;B[2][2]=1; 
	//find the sum of the arrays by using loop
	cout<<"A+B="<<endl;
	for(int i=0;i<3;i++){
		//as there are two boxes so we have to use the loop two times
		for(int j=0;j<3;j++){
			//print the sum of the arrays 
			cout<<A[i][j]+B[i][j]<<" ";
			//to change the line after each row
			if(j==2){cout<<endl;}
		}
	}
	//find the difference of  A and B
	cout<<"A-B="<<endl;
	for(int i=0;i<3;i++){
		//use loop one more time because there are two boxes
		for(int j=0;j<3;j++){
			//print the difference of the arrays 
			cout<<A[i][j]-B[i][j]<<" ";
			//to change the line after each row
			if(j==2){cout<<endl;}		
		}
	}
	//find the difference of  B and A
	cout<<"B-A="<<endl;
	for(int i=0;i<3;i++){
		//use loop one more time because there are two boxes
		for(int j=0;j<3;j++){
			//print the difference of the arrays 
			cout<<B[i][j]-A[i][j]<<" ";
			//to change the line after each row
			if(j==2){cout<<endl;}		
		}
	}
	return 0;
}
