#include <iostream.h>
#include <cstring.h>
#include "RegisteredUser.h"
#include "Traveler.h"
#include "TravelAgent.h"
#include "HotelServices.h"
#include "TourGuide.h"
#include "TourDriver.h"
#include "Vehicles.h"
#include "Payments.h"
#include "Reports.h"
#include "Tours.h"
#include "Ratings.h"
#include "HotelPackages.h"
#include "TourPackages.h"
using namespace std;

int main()
{
  //Create objects
  
  Traveler *traveler = new Traveler();
  TravelAgent *travelagent = new TravelAgent();
  HotelServices *hotelservices = new HotelServices();
  TourGuide *tourguide = new TourGuide();
  TourDriver *tourdriver = new TourDriver();
  Vehicles *vehicle=new Vehicles();
  Payments *payment=new Paymnets();
  Reports *report=new Reports();
  Tours *tour=new Tours();
  Ratings *rating=new Ratings();
  HotelPackages *Hpackage=new  HotelPackages();
  TourPackages *Tpackage=new TourPackages();


  return 0;
}