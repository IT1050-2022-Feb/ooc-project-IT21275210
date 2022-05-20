//payment class

#include<iostream>
#include "Traveler.h"
#include "HotelServices.h"

class Payments
{
	private:
		char paymentID[6];
		double amount;
		char type[10];
		char date[10];
		char time[6];
		char travelAgentId[6];
		char travelerId[6];
	public:
		payments();
		void confirmPaymentDetails();
		void storePaymentDetails();
		~payments();

};
