#include <iostream>
#include<iomanip>
#include<cstring>>
using namespace std;

//User class
class User{
	protected:
		char name[20];
		char address[50];
		char email[50];
		int phone;
	public:
		User(){
			strcpy(name,"");
			strcpy(address,"");
			strcpy(email,"");
			phone = 0;	
		}
		User(char pName[], char pAddress[], char pEmail[], int pPhone){
			strcpy(name,pName);
			strcpy(address,pAddress);
			strcpy(email,pEmail);
			phone = pPhone;
		}
		void getUserDetails(){
			cout<<"Enter Name: "<<name<<endl;
			cout<<"Enter Address: "<<address<<endl;
			cout<<"Enter Email: "<<email<<endl;
			cout<<"Enter phone number: "<<phone<<endl;
		}
};


//Customer class
class Customer: public User{
	protected:
		char cID[20];
	public:
	    Customer(){
	    	strcpy(cID,"");
		}
		Customer(char pName[], char pAddress[], char pEmail[], int pPhone, char cuID[]):User
		(pName, pAddress, pEmail, pPhone){
			strcpy(cID,cuID);
		}
		void getCustomerDetails(){
			cout<<"Customer ID: "<<cID<<endl;
		}	
};


//Admin class
class Admin: public User{
	protected:
		char adminID[20];
	public:
	    Admin(){
		    strcpy(adminID,"");
		}
		Admin(char pName[], char pAddress[], char pEmail[], int pPhone, char aID[]):User
		(pName, pAddress, pEmail, pPhone){
			strcpy(adminID,aID);
		}
		void getAdminDetails(){
			cout<<"Admin ID: "<<adminID<<endl;
		}
};

//Airline_Staff class
class Airline_Staff: public User{
	protected:
		char staffID[20];
	public:
		Airline_Staff(){
			 strcpy(staffID,"");
		}
		Airline_Staff(char pName[], char pAddress[], char pEmail[], int pPhone, char stfID[]):User
		(pName, pAddress, pEmail, pPhone){
			strcpy(staffID,stfID);
		}
		void getAirline_StaffDetail(){
			cout<<"Airline Staff ID: "<<staffID<<endl;
		}
};