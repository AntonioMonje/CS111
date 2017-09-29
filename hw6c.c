/*Purpose:  This program makes a bar chart for the sales made at the store. Sales are represented by stars.
Implemented by: Antonio Monje
Date: 10/12/2015
User Information: The inputs in this program are the number of sales made that day. Also this uses the for loop to create the program.
Implementation Method: I used the for loop method to solve for this problem.
*/


#include <iostream>
using namespace std;

int main()
{
  int store;
  int num;
  int count; 
    
  cout << "Sales Bar Chart." << endl;
  for(store = 1; store < 6; store++)
    {       
      cout << "Enter the number of sales for store " << store <<":";
      cin >> num;
      cout << "store " << store << ": ";
      
        
      for(count = 1; count <= num/100; count++)
	{	  
	  cout << '*';
	}
      cout << endl;
    }
  return 0;
}
