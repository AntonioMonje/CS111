/*Purpose:  This program makes takes two numbers entered by a user and adds them together. Then it displays the sum for the user
Implemented by: Antonio Monje
Date: 10/12/2015
User Information: The inputs in this program are the numbers entered by the users. Also this uses the do while loop to create the program.
Implementation Method: I used the do while loop method to solve for this problem.
*/

#include <iostream>
using namespace std;

int main ()
{
  int num;
  int num2;
  int sum;
  char do_over;

  do
  {
  cout << "Enter a number please." << endl;
  cin >> num;
  cout << "Enter another number please." << endl;
  cin >> num2;
  // Calculate and display the sum.     
  sum = num + num2;
  cout << "Sum: " << sum << endl;
  // Asks if they want to do it again or not.
  cout << "Do you want to do this again? (Y/N) ";
  cin >> do_over;
      
  }while(do_over == 'Y' || do_over == 'y');

  
 return 0;
}


   
