#include <iostream>
#include<iomanip>
#include<cstring>>
using namespace std;

//Flight class
class Flight{
	private:
		char flightNo[20];
		char seatNo[10];
		char from[20];
		char depature[20];
	public:
	    Flight(){
	    	strcpy(flightNo,"");
	    	strcpy(seatNo,"");
	    	strcpy(from,"");
	    	strcpy(depature,"");
		}
		Flight(const char fNo[], const char sNo[], const char fFrom[], const char fdepature[]){
		    strcpy(flightNo,fNo);
		    strcpy(seatNo,sNo);
		    strcpy(from,fFrom);
		    strcpy(depature,fdepature);
		}
		void displayFlightDetails(){
			cout<<"Flight no: "<<flightNo<<endl;
			cout<<"Flight seat no: "<<seatNo<<endl;
			cout<<"Flight from: "<<from<<endl;
			cout<<"Flight depature: "<<depature<<endl;
		}
		~Flight(){};
};