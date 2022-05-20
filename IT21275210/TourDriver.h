#include <iostream.h>
#include "Reports.h"
#include "Tours.h"
#include "Vehicles.h"
#include "Payments.h"
#define rsize 5
#define vsize 6
#define psize 4
#define tsize 6

class TourDriver : public RegisteredUser
{
	private:
        char tourDriverId[6];
        int age;
        int licenceNumber;

        Reports *reports[rsize];
        Vehicles *vehicles[vsize];
        Payments *payments[psize];
        Tours *tours[tsize];
	
	public:
        TourDriver();
		void updateProfile(); 
        void updateProfile();
        void confirmTours();
        void reserveVehicle(Vehicles *vehi1, Vehicles *vehi2, Vehicles *vehi3);
        void confirmTourRequests();
        void receivePayments();
        void addTourDriverDetails();
		~TourDriver();
}; 