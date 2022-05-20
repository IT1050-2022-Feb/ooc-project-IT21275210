#include <iostream.h>

class Vehicles
{
	private:
		int vehicleRegistrationNo;
		char vehicleModel[15];
		char vehicleType[15];
	public:
		Vehicles();
		void storeVehicleDetails();
		~Vehicles();
};