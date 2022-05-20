#include <iostream>

class Reports
{
	private:
		char reportID[6];
		
	public:
		Reports(char rID[]);
		void registerUserDetails();
		void JourneyDetails();
		void workingHoursDetails();
		~Reports();
};


