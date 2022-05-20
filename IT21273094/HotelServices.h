#include <iostream>
#include "Payments.h"
#include "HotelPackages.h"
#include "Traveler.h"
#define size 5


class HotelServices: public RegisteredUser
{
	private:
		char HotelId[6];
		char address[50];
		
		HotelPackages *hpNo[hpsize]; 
		Payments *pay[size]; 
	
	public:
		HotelServices(HotelPackages *hpNo[],Payments *pay[]);
		void addHotelPackage();
		void confirmPayment();
		~HotelServices();
};

