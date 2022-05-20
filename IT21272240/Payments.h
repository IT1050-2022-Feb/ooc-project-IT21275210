#include <iostream>
#include "HotelServices.h"
#include "Traveler.h"
#include "Reports.h" 

//payment class 
class Payments
{
	private:
		char paymentID[6];
		double amount;
		char travelerId[6];
		char travelAgentId[6];
		char type[10];
		char date[10];
		char time[6];
		
		hotelSevices *hs; 
		traveler *t[tsize]; 
		Reports *repPayments[rsize]; 
		
	public:
		Payments();
		Payments(char payId[], hotelServices *hs) 
		void confirmPaymentDetails();
		void storePaymentDetails();
		~Payments();
};