#include <iostream>
#include "TourPackage.h"
#include "Traveler"
#include "Tours"
#include "Vehicles"
#define tpsize 2

class travelAgent: public RegisteredUser
{
	private:
		char travelAgentId[6];
		int age;
		TourPackages *tpNo[tpsize]; 
	public:
		travelAgent();
		void addTravelAgentDetails();
		void organizetour();
		void rentVehicle(Vehicles *veh); 
		void confirmTourRequests();
		~travelAgent();
};