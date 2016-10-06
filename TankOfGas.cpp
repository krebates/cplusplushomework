#include <iostream>
#include <string>

// ** This can be found on http://cpp.sh/6wx2 **

int main()
{
  float numberOfGallons, gallonsHighway = 28.9, gallonsTown = 23.5, highwayMileage, townMileage;

  std::cout << "Do you want to input information for your car to see your totals?\n";
  std::cout << "You need to know how big your tank is, your mileage in town and on the highway.\n";
  std::cout << "What are the number of gallons of gas in your car tank?";
  std::cin >> numberOfGallons;
  std::cout << "How many miles per gallon do you get when you drive on the highway?";
  std::cin >> gallonsHighway;
  std::cout << "How many miles per gallon do you get when you drive in the town?";
  std::cin >> gallonsTown;

  highwayMileage = numberOfGallons * gallonsHighway;
  townMileage = numberOfGallons * gallonsTown;

  std::cout << "For your tank of " << numberOfGallons << " gallons of gas. You can get " << highwayMileage << " miles on the highway and " << townMileage << " miles in the town.";
}
