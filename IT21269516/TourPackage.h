#include <iostream>
class TourPackages
{
	private:
		char packageID[6];
		char packageName[10];
		char packageType[10];
		double packagePrice;
		
	public:
		TourPackages();
		void tourPackagesDetails();
		~TourPackages();
};
