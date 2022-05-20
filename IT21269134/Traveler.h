//traveler class

#include <iostream>
#include "Payments.h"
#include "Ratings.h"
#include "Reports.h"
#include "TravelAgent.h"
#include "HotelServices.h"
#include "RegisteredUser.h"
#include "TourDriver.h"
#include "TourGuide.h"
#include "TravelAgent.h"

class Traveler : public RegiseteredUser
{
private:
	char travelerId[6];
	char gender[10];
	char address[20];
	int age;
	TourDriver* tourdriver1;
	Ratings* ratingValue[rateSIZE];

public:
	traveler();
	void addDetails();
	void purchasePackages();
	void reserveServiceProviders();
	void addRatings();
	~traveler();
};





