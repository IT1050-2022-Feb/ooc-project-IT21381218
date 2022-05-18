#include<cstring>
#include"hotel.h"
#include"user.h"
#include "report.h"
#include "flight.h"
#include "ticket.h"
using namespace std;

//Main Program
int main(){
	Customer c1;
	Admin a1;
	Airline_Staff stf1;
  Report r1;
  Hotel h1;
  Flight f1;
  Ticket t1;
	
	c1.getCustomerDetails();
	a1.getAdminDetails();
	stf1.getAirline_StaffDetail();
  r1.displayReportDetails();
  h1.displayHotelDetails();
  f1.displayFlightDetails();
  t1.displayTicketDetails();
	
	return 0;
}