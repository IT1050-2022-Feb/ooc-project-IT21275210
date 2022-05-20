#include <iostream>

//tour class
class Tours
{
	private:
		char tourID[6];
		char date[10];
		char time[6];
		
	public:
		Tours();
		void storeTourDetails();
		~Tours();	
};