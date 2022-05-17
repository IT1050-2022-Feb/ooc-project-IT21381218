#include <iostream>
#include<iomanip>
#include<cstring>>
#include"user.h"
using namespace std;

//Main Program
int main(){
	Customer c1;
	Admin a1;
	Airline_Staff stf1;

	
	c1.getCustomerDetails();
	a1.getAdminDetails();
	stf1.getAirline_StaffDetail();

	
	return 0;
}