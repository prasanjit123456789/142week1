/*Write a class House which has the following data and functions : (you may add other function members to help you with the program) 
1. Name of the house (Data)
2. Address 
3. Rooms 
4. Setup  // Asks for entry of data to house)
5. Display // Displays the details of house - Name, Address, Rooms, Total area of the house (Sum of rooms), Also displays like "3 Bedroom, 1 Kitchen and 2 Bathroom. " - This should use the displays of the address and room class.
6. CopyHouse  // Takes input as a name and a another object of house as input and and copies all the details of the house except the name

Address itself is a class; which stores the following data and functions
1. House Number (CString)
2. City (Cstring)
3. Zipcode (Number)
4. Setup // Asks the user to enter data for address and sets the address
5. Display // Displays the address 

Room also is a class, which store the following data and functions
1. Length
2. Breadth
3. Height 
4. Purpose // Cstring to store "Kitchen, Bathroom, Bedroom etc"
5. Setup // Asks the user to enter data for rooms and sets the room
6. Display // Displays the room details 

Write a suitable main function to create 3 houses with proper details and then display them.
Copy House 1 details to House 2 except the name (name should remain as House 2) and then display all the houses again. 

*/
//define library
#include<iostream>
#include<cstring>
using namespace std;
//class room
class Room{
	//make public
	public:
	float length,breadth,height;
	char purpose[50];
	//setup function that setup the room
	void setup(){
		//ask and input the dimensions
		cout<<"Length=";
		cin>>length;
		cout<<"Breadth=";
		cin>>breadth;
		cout<<"Height=";
		cin>>height;
		cout<<"What is the purpose of the house?";
		cin>>purpose;
	}
	//display function that displays the details of the room
	void display(){
		cout<<"The purpose of the house="<<purpose<<endl;
		cout<<"Length="<<length;
		cout<<"Breadth="<<breadth;
		cout<<"Height="<<height;
	}
	
};
//Address class
class Address{
	//make public
	public:
	char housenumber[50];
	char city[50];
	long int zipcode;
	//setup the address
	void setup(){
		cout<<"Give the house number";
		cin>>housenumber;
		cout<<"Give the name of the City.";
		cin>>city;
		cout<<"Give the zipcode.";
		cin>>zipcode;	
	}
	//display function that displays the address of the house
	void display(){
		cout<<"House number="<<housenumber<<endl;
		cout<<"City name is "<<city<<endl;
		cout<<"Zipcode="<<zipcode<<endl;
	}
};
//define House class
class House{
	//make public
	public:
	char hosnam[50];
	int roomnumber;
	//constructor
	House(){
		//ask the house name
		cout<<"What is the house name?";
		cin>>hosnam;
		cout<<"How many rooms you want?";
		cin>>roomnumber;
	}
	//room objects
	Room ar[1000];
	//address object
	Address address;
	//create rooms
	void setup(){
		//set up rooms
		cout<<"Give the data of ";
		for(int i=0;i<roomnumber;i++){
			cout<<i+1<<"th room";
			ar[i].setup();
		}
		//set address
		address.setup();
	}
	//display function that displays about the house
	void display(){
		cout<<"Name of the house is="<<hosnam<<endl;
		//about the rooms
		cout<<"Rooms";
		for(int i=0;i<roomnumber;i++){
			ar[i].display();
			cout<<endl;
		}
		//display the address
		cout<<"Address=";
		address.display();
		cout<<"Total area of house="<<roomnumber<<endl;
		//find the number of of the bathrooms, kitchens and bedrooms
		int n=0,m=0,l=0;
		for(int i=0;i<roomnumber;i++){
			if(ar[i].purpose=="Bathroom" ||ar[i].purpose=="bathroom" ||ar[i].purpose=="BATHROOM"){
				n++;
			}
			else if(ar[i].purpose=="Kitchen" ||ar[i].purpose=="kitchen" ||ar[i].purpose=="KITCHEN"){
				m++;
			}
			else{
				l++;
			}
		}
		cout<<"The number of Bathrooms="<<n<<endl;
		cout<<"The number of Bedrooms="<<l<<endl;
		cout<<"The number of Kitchens="<<m<<endl;
	}
	//copyHouse function that copies the house except the name
	void copyHouse(House* ad,char name[]){
		//it copies all the things
		int j=0;
		while(name[j]!='\0'){
			hosnam[j]=name[j];
			j++;
		}
		hosnam[j]='\0';
		roomnumber=ad->roomnumber;
		for(int i=0;i<roomnumber;i++){
			//to pass the purpose
			int n=0;
			while(ad->ar[i].purpose[n]!='\0'){
				ar[i].purpose[n]=ad->ar[i].purpose[n];
				n++;
			}
			ar[i].purpose[n]='\0';
			ar[i].length=ad->ar[i].length;	
			ar[i].breadth=ad->ar[i].breadth;
			ar[i].height=ad->ar[i].height;	
		}
		//address
		address.zipcode=ad->address.zipcode;
		int m=0;
		while(ad->address.city[m]!='\0'){
			address.city[m]=ad->address.city[m];
			m++;
		}
		address.city[m]='\0';
		int l=0;
		while(ad->address.housenumber[l]!='\0'){
			address.housenumber[l]=ad->address.housenumber[l];
			l++;
		}
		address.housenumber[l]='\0';
	}
};
//main
int main(){
	House h1;
	
	h1.setup();h1.display();
	return 0;
}
