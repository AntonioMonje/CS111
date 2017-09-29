/*Purpose:  This program shows the amount of money made based on the package purchased that day. It calculates for the different prices for the different packages.
Implemented by: Antonio Monje:
Date: 10/5/2015
User Information: The inputs in this program the amount for the packages depending on the amount of minutes they want. Also this calculates the overage for the amount of minutes you go over.
Implementation Method:I used the if else method and else if method to solve for this problem. 
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
  int number;
  int minutes_over;
  int minutes_over2;
  const double PACKAGEA = 39.99;
  const double PACKAGEB = 59.99;
  const double PACKAGEC = 69.99;

 
  cout << "Enter the package A, B, C" << endl;
  cin >> package;

  if ((package != 'A') &&  (package != 'B') && (package != 'C'))
    {
   cout << "picked a bad package" << endl;
    }
      else  // Inputs are good
	{        
	  {
	  cout << setprecision(2) << fixed << endl;
          cout << "how many minutes did you use this month." << endl;
          cin >> minutes;
	  }
          
       if (minutes <= 0)
	 { 	 
	  cout << "Bad amount of minutes!" << endl;
	 } 

	  else // Inputs are good.
	    {
	      {
	  minutes_over = minutes - 450;
	  minutes_over2 = minutes - 900;
	  total = (PACKAGEA + (minutes_over * .45));
	  total2 = (PACKAGEB + (minutes_over2 * .40));
	      }

          if  (package == 'A' && minutes <= 450)	                
	    {
	    cout << "You used this many minutes " << minutes << " your total is: " << "$" << PACKAGEA << endl;	    
	    }
	  else if (package == 'A' && minutes > 450)      
	    {    
	    cout << "You used this many minutes " << minutes << " your total is: " << "$" << total << endl;	    
	    }

	  else if (package == 'B' && minutes <= 900)	    
	    {
	    cout << "You used this many minutes " << minutes << " your total is: " << "$" << PACKAGEB << endl;	    
	    }
	  else if (package == 'B' && minutes > 900)	    
	    {   
	    cout << "You used this many minutes " << minutes << " your total is: " << "$" << total2 << endl;	    
	    }

	   else 
	     {
	    cout << "You used this many minutes " << minutes << " your total is: " << "$" << PACKAGEC << " you have unlimited minutes!" << endl; 
	     }    
	    }
	}
   
	

	  
	
	       		    	   
  return 0;
}


