/*Purpose:  This program makes a receipt showing the amount of money made based on the amount of tickets sold that day. It calculates for the different prices for children and adults.
Name: Antonio Monje:
Date: 9/25/2015
User Information: The inputs in this program are the number of adult tickets sold, the children tickets sold, and the movie name. The outputs are the amount of tickets sold, the gross profit, the net profit, and the amount paid to the distributer.
Implementation Method: The calcutions I used were the for getting the price for the tickets. For example for adult tickets I multiplied the amount enterd by the price of the tickets similarly for the children tickets. Then the Gross income was found by adding the ticket amount together. For the Net income I multiplied the gross income by the percent kept. Finally the total was found by subtracting the net total from the gross total.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  string date;
  string name;
  double price = 10.00;
  double price2 = 6.00;
  double children;
  double adults;
  int adulttickets;
  int childrentickets;
  double net;
  double gross;
  double Total;
  const double  PERCENTKEPT = .20;
 
  // Amounts the user needs to enter.

  cout  << "Enter Your movie Name";
  getline(cin, name);
  cout << "Enter the amount of adults." << endl;
  cin >> adulttickets;
  cout << "Enter the amount of children." << endl;
  cin >> childrentickets;

  // My calculations for the prices.
  adults = adulttickets * price;
  children = childrentickets * price2;

  // Second calculations.
  gross = adults + children;
  net = gross * PERCENTKEPT;
  Total = gross - net;
 
  // What is shown.
  cout << setprecision(2) << fixed;
  cout << left << setw(39) << "Movie Name:" << "\"" << name << "\"" << endl;
  cout << left << setw(40) << "Adult Tickets Sold:" << right <<  setw(5) << adulttickets << endl;
  cout << left << setw(40) << "children Tickets Sold:" << right << setw(5) << childrentickets << endl;
  cout << left << setw(30) << "Gross Box Office Profit;" << right << setw(10) << "$" << gross << endl;
  cout << left << setw(30) << "Net Box Office Profit:" << right << setw(11) << "$" << net << endl;
  cout << left << setw(30) << "Amount Paid to Distributor:" << right << setw(10) << "$" << Total << \
    endl;
  return 0;
}
