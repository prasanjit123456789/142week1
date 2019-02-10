/*Write a C++  program to inter the elements of the two matrix A and B 
and their multitlication where 

	   1 2 3	3 1 3
	A=-1 0 3  ,B=  -1 0 -2
	   7 4 1        0 4 1

*/
//define library
#include<iostream>
#include<cstring>
using namespace std;

//define main function
int main(){
	//define variables
	int A[3][3],B[3][3],mult[3][3],n;
	//int marks[3][5]={{50,60,55,67,70},{62,65,70,70,81},{72,66,77,80,69}};;
	//give the values in the array A
	A[0][0]=1;A[0][1]=2;A[0][2]=3;A[1][0]=-1;A[1][1]=0;
	A[1][2]=3;A[2][0]=7;A[2][1]=4;A[2][2]=1;
	//the values of array B
	B[0][0]=3;B[0][1]=1;B[0][2]=3;B[1][0]=-1;B[1][1]=0;
	B[1][2]=-2;B[2][0]=0;B[2][1]=4;B[2][2]=1;
	//use loop to multiply the two A and B
	cout<<"A*B="<<endl;
	for(int i=0;i<3;i++){
		//introduce another arrow that changes the column of B for multiplication
		for(int x=0;x<3;x++){
			//ensure n=0 
			n=0;
			//loop to change the column of A and row of B
			for(int j=0;j<3;j++){
				//add and store in n
				n+=(A[i][j]*B[j][x]);
			}
			//cout the multiplication
			cout<<n<<" ";
			if(x==2){cout<<endl;}
		}
	}
	return 0;
	/*char b[]={'a','b','c'};
	char *p=b;
	cout<<"  "<<*(p+1);return 0;*/
}
