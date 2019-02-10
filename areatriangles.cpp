/*FIND THE AREAS OF THE TRIANGLES AND ORDER THEM GIVEN BY THE USER*/
#include<iostream>
#include<cmath>
using namespace std;
//define printorder function
void printorder(float ar[],int n){
	float temp;//float l=ar[0];
	//use loop and condition to compare and put in the order to greater and smaller
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(ar[j]>ar[j+1]){
				temp=ar[j];ar[j+1]=ar[j];ar[j+1]=temp;
			}
		}
		
	}
	for(int i=0;i<n;i++){cout<<ar[i]<<" ";}
}
//class of area
class Area{
	//public
	public:
	//define consrtructor
		float p,q,r;
	
	//define areatriangle function that calculates the area
	float areatriangle(){
		//calculate semiperimeter
		float s=(p+q+r)/2;
		//return the area by calculating
		return pow((s*(s-p)*(s-q)*(s-r)),0.5);
	}
};
int main(){
	//define variables
	int n;
	//ask user to give an integer	
	cout<<"How many triangles do you awnt to give?"<<endl;
	cin>>n;
	//define array that will store the sides of the triangle given 'by the user
	float side[3*n];
	float c;
	//use loop to store the sides of the triangle in the side array 
	for(int i=0;i<3*n;i++){
		//use condition that will say the user that give the nth triangle
		if(i%3==0){cout<<"Give the sides of "<<(i/3)+1<<" triangle."<<endl;}
		cin>>c;
		//input in the array
		side[i]=c;	
		}
		float area[n];
	//define object
	Area triangle;
	//use loop to make each triangle a part of the object
	for(int i=0;i<n;i++){
		//give the inputs of p,q,r those are in the class
		triangle.p=side[3*i];
		triangle.q=side[(3*i)+1];
		triangle.r=side[(3*i)+2];
		//call the area function in the class
		area[i]=triangle.areatriangle();
	}
	cout<<"The areas in ascending order=";
	//call by printorder function that will print the areas in order
	printorder(area,n);
	return 0;
}
