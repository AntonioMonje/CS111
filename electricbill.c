#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int month;
  int cmeter;
  int pmeter;
  int amountw;
  double total;
  double total2;
  double total3;
  double kwhover;
  double totalconsumption;
  const double RATE1 = 8.50;
  const double RATE2 = 0.07525;
  const double RATE3 = 0.06575;
  
    cout << "Enter the month." << endl;
    cin >> month;
 
    if (month < 1 || month > 12)
    cout << "Month is bad" << endl;
    
   
    else // Month is good.
    {
      cout << "Enter the current meter." << endl;
      cin >> cmeter;
      cout << "Enter the previous meter." << endl;
      cin >> pmeter;
    
      if ( pmeter < 0 || cmeter < 0 || cmeter < pmeter)	
      cout << "current or previous meter is negative." << endl;
      

      else  // Inputs are good
	{
	    // Claculations
	    amountw = (cmeter - pmeter);
	    kwhover = (amountw - 400);
	    total3 = RATE1 + (kwhover * RATE3);
            total2 = RATE1 + (kwhover * RATE2);
            total = RATE1;
	   
	    cout << setprecision(2) << fixed << endl;
	
            if  (amountw <= 400)  
	      
	    cout << "You consumed  " << amountw << " your total is: " << "$" << total << endl;   
	      
	    else if ((amountw > 400) && (month >= 5 && month <= 9))
	    cout << "You consumed " << amountw << " your total is: " << "$" << total2 << endl;

            else  
	    cout << "You consumed  " << amountw << " your total is: " << "$" << total3 << endl;
	}        
    }


    
return 0;
}
	    
	    
	    

	

