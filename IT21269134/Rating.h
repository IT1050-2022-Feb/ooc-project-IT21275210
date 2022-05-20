//Rating class

#include <iostream>s
#include "Traveler.h"

class Rating
{
private:
	char ratingsId[6];
	double value;

public:
	ratings();
	void storeRatingValues();
	double calcRating();
	~ratings();
};