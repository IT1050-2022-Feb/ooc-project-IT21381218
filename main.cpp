#include<cstring>>
#include"user.h"
#include "report.h"
using namespace std;

//Main Program
int main(){
	Customer c1;
	Admin a1;
	Airline_Staff stf1;
  Report r1;
	
	c1.getCustomerDetails();
	a1.getAdminDetails();
	stf1.getAirline_StaffDetail();
  r1.displayReportDetails();
	
	return 0;
}