/*/*Purpose:  This program takes the average of the sick days from the amount of employees they had. This program uses functions to create it.
Implemented by: Antonio Monje
Date: 10/28/2015
User Information: The inputs in this program are the number of employees. The outputs in this program are the average that is calculated from the other functions I created.
*/

#include <iostream>
using namespace std;
int employeenum();
double calc(int employees, int days);
int missed(int employees);
int main()
{
  int employees;
  int days;
  double avg;
  int total;

  employees = employeenum();
  days =  missed(employees);
  avg = calc(employees, days);
  
    cout << "The avg number of sick days is: " << avg << endl;
  return 0;
}
int employeenum()
{
  int employees;
do
  {
  cout << "Enter the number of employees: ";
  cin >> employees;
  }while(employees < 1);
  return employees;
}

int missed(int employees)
{
  int num;
  int total = 0;
  int count = 0;
  char again;
  
 
  while(employees !=0 )
    {
     do
       {
      cout << "Enter how many days did one employee missed: ";
      cin >> num;
      if(num < 1)
      cout << "Invalid Number!" << endl;
       }while(num < 0); 
      total = total + num;
      employees--;
    }
      return total;    
}   
    
  double calc(int employees, int days)
  {
    double avg = (double)days/employees;
    return avg;
  }
