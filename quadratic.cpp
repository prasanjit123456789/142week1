/*This is aprogram that solves a quadratic equation*/
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void quadratic(double &d,double &e,double &f){
	//use condition to know if the roots are complex or not
	if((e*e)-(4*d*f)<0){
		cout<<"The solutions are "<<((0-e)/(2*d))<<"+"<<(sqrt ((4*d*f)-(e*e)))/(2*d)<<"i and "<<((0-e)/(2*d))<<"-"<<(sqrt ((4*d*f)-(e*e)))/(2*d)<<"i"<<endl;
	}
	else if((e*e)-(4*d*f)==0){cout<<"The solution is "<<(0-e)/(2*d)<<endl;}
	else
	{
	cout<<"The solutions are "<<((0-e)/(2*d))+(sqrt (-(4*d*f)+(e*e)))/(2*d)<<" and "<<((0-e)/	(2*d))-(sqrt (-(4*d*f)+(e*e)))/(2*d)<<endl;}
}
//main function
int main(){
	//define variables
	double a,b,c;
	cout<<"Give the coefficints of the x^2,x,1 respecitvely."<<endl;
	cin>>a>>b>>c;
	//call the quadratic function
	quadratic(a,b,c);
}
