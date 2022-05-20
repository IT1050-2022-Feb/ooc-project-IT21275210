#include <iostream>
#include "Payments.h"
#include "Tours.h"
#include "Reports.h" 

#define psize 6

//Tourguide class
class tourGuide: public RegisteredUser
{
	private:
		char tourGuideId[6];
		int licenseNo;
		int age;
		char language[15];
		char gender[10];
		Payments *pay[psize]; 
		Reports *repTG[rsize]; 
		Tours *toursTG[10];
	
	public:
		tourGuide();
		void confirmTours();
		void receivePayment();
		void confirmTourRequests();
		void updateProfile();
		~tourGuide();
}; 
