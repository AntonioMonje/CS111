#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  int days;
  int num;
  double pay = .01;
  double total = 0;

do
  {
    cout << "Enter the number of days you worked." << endl;
    cin >> days;
    if (days <= 0)
      {
	cout << "Entered invalid days!" << endl;
      }
  }while(days <= 0);


 
 for(num = 1; num <= days; num++)
   {  

   cout << setw(10) << num << setw(10) << pay << endl;   
   total += pay;
   pay =  pay * 2;

   }

 cout << setw(10) << "Total: " << setw(10) << total << endl;


 return 0;
}
