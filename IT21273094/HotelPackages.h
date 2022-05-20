#include <iostream>

class HotelPackages
{
	private:
		char hotelPackageId[6];
		char hotelPackageName[10];
		char hotelName[10];
		char type[10];
		double price;
		
	public:
		HotelPackages(char hpID[],char hpName[],char hName[],char 
     t[],double p);
		void storeHotelPackageDetails();
		~HotelPackages();
};

