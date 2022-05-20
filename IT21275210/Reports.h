#include <iostream.h>

class Reports
{
	private:
		char reportID[6];
		
	public:
		Reports();
		void registerUserDetails();
		void JourneyDetails();
		void workingHoursDetails();
		~Reports();
};