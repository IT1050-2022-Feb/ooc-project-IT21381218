#include <iostream>
#include<iomanip>
#include<cstring>>
using namespace std;

//Hotel class
class Hotel{
	private:
		char regNo[20];
		char hName[20];
		char location[20];
		int phone;
		char email[50];
	public:
	    Hotel(){
	    	strcpy(regNo,"");
	    	strcpy(hName,"");
	    	strcpy(location,"");
	    	phone= 0;
	    	strcpy(email,"");	
		}
		Hotel(const char rNo[],const char hotelName[],const char hLocation[], int hPhone,const char hEmail[]){
			strcpy(regNo,rNo);
			strcpy(hName,hotelName);
			strcpy(location,hLocation);
			phone=hPhone;
			strcpy(email,hEmail);
		}
		
		void displayHotelDetails(){
			cout<<"Hotel registration no: "<<regNo<<endl;
			cout<<"Hotel name: "<<hName<<endl;
			cout<<"Hotel loction: "<<location<<endl;
			cout<<"Hotel phone: "<<phone<<endl;
			cout<<"Hotel email: "<<email<<endl;
		}
		~Hotel(){};
};
