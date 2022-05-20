#include<iostream>
#include<cstring>
using namespace std;

class Type{
   protected :
    char pName[20];
    char pAddress[20];
    char pNIC[20];
    char pEmail[20];
    int pNumber;
    char pDistrict[20];
   
   public:	
    Type();
	Type(const char P_Name, const char P_Address, const char P_NIC, const char P_  ){
     strcpy(pName,"Rajan");
     strcpy(pAddress,"Jaffna");
     strcpy(pNIC,"929876342V");
     strcpy(pEmail,"rajanS@gmail.com");
     pNumber = 0741235671;
     strcpy(pDistrict,"Jaffna");
    	
	}
    void enterPatientDetails();
	void makeOrder();
	
};



class Echannelling:public Type{
  private:
  	char Dname [20];
  	char  Dspec [20] ;
  
  	
  public:
  	Echannelling(){
  	 strcpy(pName,"Saman");
     strcpy(pAddress,"Chilaw");
     strcpy(pNIC,"681239088V");
     strcpy(pEmail,"Sam@gmail.com");
     pNumber = 0741234441;
     strcpy(pDistrict,"Puttalam");
     strcpy( Dname  ,"Senawirathna");
     strcpy(Dspec,"VOG");
  		
	  }
	void enterPatientDetails(){
	}
    void enterDoctorDetails(){
	}
	
	
};
 

