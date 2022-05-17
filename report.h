#include <iostream>
#include<iomanip>
#include<cstring>>
using namespace std;

//Report class
class Report{
	private:
		char rID[20];
		char rDate[20];
		char rTyoe[20];
	public:
	    Report(){
	    	strcpy(rID,"");
	    	strcpy(rDate,"");
	    	strcpy(rTyoe,"");
		}
		Report(const char reportNo[],const char reportDtae[],const char reportType[]){
			strcpy(rID,reportNo);
			strcpy(rDate,reportDtae);
			strcpy(rTyoe,reportType);
		}
		void displayReportDetails(){
			cout<<"Report No: "<<rID<<endl;
			cout<<"Report date: "<<rDate<<endl;
			cout<<"Report type: "<<rTyoe<<endl;
		}
		~Report(){};
};