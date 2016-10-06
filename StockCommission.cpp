// Can be found here: http://cpp.sh/3qf6

#include <iostream>
#include <string>
using namespace std;


int main()
{
  //variables
  double numberOfShares = 200;
  double priceOfShare = 21.77;
  double brokerCommission = 2;
  double totalBrokerCommission = 0.0;
  double totalPriceOfShares = 0.0;
  double grossTotal = 0.0;

  // Information of the program
  cout << "Kathryn bought " << numberOfShares << "shares of stock at a price of $" << priceOfShare << " per share." << endl;
  cout << "She must pay her stock broker a " << brokerCommission << "percent commission for the transaction." << endl;
  cout << "This is how much she should expect to pay..." << endl;
  cout << "\n";
  cout << "-----------------------------------------------------------------------------" << endl;
  cout << numberOfShares << " shares @ $" << priceOfShare << endl;
  cout << "-----------------------------------------------------------------------------" << endl;
  cout << "" << endl;

  //Calculate the total stock price, broker commission, and gross total
  totalPriceOfShares = priceOfShare * numberOfShares;
  totalBrokerCommission = totalPriceOfShares * (brokerCommission * 0.01);
  grossTotal = brokerCommission + totalPriceOfShares;

  cout << "Total Stock Price: $ " << totalPriceOfShares << endl;
  cout << "Broker Commission: $ " << totalBrokerCommission << endl;
  cout << "Gross Total:       $ " << grossTotal << endl;
  cout << "\n";

    // get total shares
  cout << "\nHow many shares will you be buying?  " ;
  cin >> numberOfShares;
  // get price per share
  cout << "\nWhat is the price per share?  " ;
  cin >> priceOfShare;
  //get broker commission
  cout << "\nWhat percentage will your broker be paid? (3 or 4...)  "  ;
  cin >> brokerCommission;
  cout << endl;

    cout << "-----------------------------------------------------------------------------" << endl;
    cout << numberOfShares << " shares @ $" << priceOfShare << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    //Provides new values
    cout << "Total Stock Price: $ " << totalPriceOfShares << endl;
    cout << "Broker Commission: $ " << totalBrokerCommission << endl;
    cout << "Gross Total:       $ " << grossTotal << endl;
    cout << "\n";

    // Farewell to the user
    cout << "Have a nice day!";
    cout << "" << endl;
    cout << "Press any key to continue.";
}