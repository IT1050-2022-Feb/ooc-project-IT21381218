#include <iostream>
#include<iomanip>
#include<cstring>

using namespace std;


//Ticket class
class Ticket{
	private: 
	    char ticketID[20];
	    float price;
	public:
	    Ticket(){
	     	strcpy(ticketID,"");
	     	price= 0;
		}
		Ticket(const char tID[], float tPrice){
			strcpy(ticketID,tID);
			price = tPrice;
		}
		void displayTicketDetails(){
			cout<<"Ticket no: "<<ticketID<<endl;
			cout<<"Ticket price: Rs."<<price<<endl;
		}
		~Ticket(){};
};
