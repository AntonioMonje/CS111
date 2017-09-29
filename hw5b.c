
/*Purpose:  This program shows the amount of money made based on the package purchased that day. It calculates for the different prices for the different packages.
Implemented by: Antonio Monje:
Date: 10/5/2015
User Information: The inputs in this program the amount for the packages depending on the amount of minutes they want. Also this calculates the overage for the amount\
 of minutes you go over.
Implementation Method: I used the if else method and the switch method. I eeded the if else in case they go over their limit for the packages a and b. So the program consist of the only one main function with the switch and if else inside of it.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
 
  double total;
  double total2;
  char package;
  char packageA = 'A';
  char packageB = 'B';
  char packageC = 'C';
  int minutes;
  int minutes_over;
  int minutes_over2;
  const double PACKAGEA = 39.99;
  const double PACKAGEB = 59.99;
  const double PACKAGEC = 69.99;

  
  cout << "Enter the package you purchased A, B, or C." << endl;
  cin >> package;
 
  if ((package != 'A') &&  (package != 'B') && (package != 'C'))
    {
      cout << "picked a bad package" << endl;
    }
  else
    {   
  cout << "Enter the number of minutes you used this month." << endl;
  cin >> minutes;
      
  if (minutes <= 0)
    {
      cout << "Invalid amount of minutes!" << endl;
    }
  else 
    {
 // Calculations
  minutes_over = minutes - 450;
  minutes_over2 = minutes - 900 ;
  total = (PACKAGEA + (minutes_over * .45));
  total2 = (PACKAGEB + (minutes_over2 * .40));

  switch (package)
    {
    case 'A':
      if (packageA && minutes <= 450)
	{
    cout << "You used this many minutes " << minutes << " your total is: " << "$" << PACKAGEA << endl;
	}    
      else 
	{
	cout << "You used this many minutes " << minutes << " your total is: " << "$" << total << endl;
	}
	break;

    case 'B':
      if (packageB && minutes <=900)
	{ 
      cout << "You used this many minutes " << minutes << " your total is: " << "$" << PACKAGEB << endl; 
	}      
	else
	  { 
     cout << "You used this many minutes " << minutes << " your total is: " << "$" << total2 << endl;
	  }
      break;

    default: cout << "You have unlimited minutes " << minutes << " your total is: " << "$" << PACKAGEC << endl;
    }
    }
    }
  return 0;
}


