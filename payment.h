#include <iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Payment{
	private:
		char pID[20];
		char date[20];
		char type[20];
		float amount;
	public:
	    Payment(){
	    	strcpy(pID,"");
	    	strcpy(date,"");
	    	strcpy(type,"");
	    	amount = 0;
		}
		Payment(const char pmtID[], const char pDate[], const char pType[], float pAmount){
		    strcpy(pID,pmtID);
	    	strcpy(date,pDate);
	    	strcpy(type,pType);
	    	amount = pAmount;
		 }
		void displayPaymentDetails(){
			cout<<"Payment ID: "<<pID<<endl;
			cout<<"Payment date: "<<date<<endl;
			cout<<"Payment type: "<<type<<endl;
			cout<<"Payment amount: Rs."<<amount<<endl;
		}
		~Payment(){};
};