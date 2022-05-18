#include <iostream>
#include<iomanip>
#include<cstring>
using namespace std;


//Package class
class Package{
	private:
		char pkID[20];
		char pName[20];
		float pPrice;
	public:
		Package(){
			strcpy(pkID,"");
			strcpy(pName,"");
			pPrice = 0;
		}
        Package(const char pID[], const char name[], float price){
        	strcpy(pkID,pID);
        	strcpy(pName,name);
        	pPrice = price;
		}
		void displayPackageDetails(){
			cout<<"Package ID: "<<pkID<<endl;
			cout<<"Package name: "<<pName<<endl;
			cout<<"Package price: Rs."<<pPrice<<endl;
		}
		~Package(){};
};