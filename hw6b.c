
/*Purpose:  This program displays the amounts entered by the user and the net pay. It makes sure that they don't enter the negative numbers or that the gross pay is less than the sum of the rest of the amounts combined or by themselves.
Implemented by: Antonio Monje
Date: 10/12/2015
User Information: The inputs in this program are employee ID, grosspay,state tax, federal tax, FICAW. Also this uses the while loop to create the program.
Implementation Method: I used the while loop method to solve for this problem. The program solves for the net pay and for the sum amount.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int empid;
  double grosspay = 0;
  double state_tax = 0;
  double federal_tax = 0;
  double FICAW = 0;
  bool invalid;
  double sum;
  double net_pay;

  cout << "To end this program enter 0 for the second EMPLOYEE ID or to continue just keep entering values." << endl;
  cout << "Enter your EMPLOYEE ID please." << endl;
  cin >> empid;

  while(empid != 0)
    {
     

   cout << "Enter your gross pay." << endl;
   cin >> grosspay;
   cout << "Enter your State Tax." << endl;
   cin >> state_tax;
   cout << "Enter your Federal tax." << endl;
   cin >> federal_tax;
   cout << "Enter your FICA withholdings." << endl;
   cin >> FICAW;
    
   // Calculations
   net_pay = grosspay - (state_tax + federal_tax + FICAW);
   sum = state_tax + federal_tax + FICAW;
        
   while( (empid < 0) || (grosspay < 0) || (state_tax < 0) || (federal_tax < 0) || (FICAW < 0) || (grosspay < sum))
     {
       cout << "ERROR invalid! Enter new data please." << endl;
       cout << "Enter your gross pay." << endl;
       cin >> grosspay;
       cout << "Enter your State Tax." << endl;
       cin >> state_tax;
       cout << "Enter your Federal tax." << endl;
       cin >> federal_tax;
       cout << "Enter your FICA withholdings." << endl;
       cin >> FICAW;
       cout << "Enter your EMPLOYEE ID please." << endl;
       cin >> empid;
    
     }

   cout << fixed << setprecision(2) << endl;
   cout << "Your gross pay is: " << "$ " << grosspay << endl;
   cout << "Your State tax is: "  << "$ " << state_tax << endl;
   cout << "Your Federal tax is: " << "$ " << federal_tax << endl;
   cout << "Your FICA withholdings is: " << "$ " << FICAW << endl;
   cout << "Your net pay is: " << "$ " << net_pay << endl;
   cout << "To end this program enter 0 for the second EMPLOYEE ID or to continue just keep entering values." << endl;
   cout << "Enter your EMPLOYEE ID please." << endl;
   cin >> empid;

    } 
                
    
 return 0;
}
