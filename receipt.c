
// This program makes a receipt
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  string date;
  string name;
  string item1;
  double price;
  double Salestax;
  double Total;
  const double TAXRATE = .0775;
  
  cout << "-------------------------------\n";
  cout << setw(31) << "Enter todays date: " << endl;
  getline(cin, date);
  cout  << "Enter Your Name";
  getline(cin, name);
  cout << "Enter the item name.";
  cin >> item1;
  cout << "Enter the price.";
  cin >> price;
  Salestax = price * TAXRATE;
  cout << "-----------------------------\n";
  cout << "\"Your Neighborhood Dollar Store.\"" << endl;
  cout << setw(31) << right << date << endl;
  cout << setw(31) << right << name << endl; 
  cout << setprecision(2) << fixed;
  cout << left << setw(20) <<  item1 << "$" << right << setw(10) << price << endl;
  cout << left << setw(20) << "Sales tax" << "$" << right <<  setw(10) <<  Salestax << endl;
  Total = price + Salestax;
  cout << left << setw(20) << "Total" << "$" << right  << setw(10) <<  right << Total << endl;
  cout << "-------------------------------\n";
  return 0;
}

