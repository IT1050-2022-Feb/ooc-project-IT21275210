#include <iostream>
#define rsize 1

class RegisteredUser
{
	protected:
		char name[20];
		int contactNumber;
		char email[20];
		Reports *repRU[rsize 1];
		
	public:
		RegisteredUser();
		void displayUserDetails();
		~RegisteredUser();
};