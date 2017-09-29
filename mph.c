//This program converts mph to m/s.
#include <iostream>
using namespace std;

int main()
{
  const double METERS = 1609;
  const double SECONDS = 3600;
  double  number;
  double  ms;

   cout << "Enter the number of miles per hour." << endl;
   cin >> number;
   ms = (double)number * METERS * (1/ SECONDS);
   cout << "The number of meters per second is " << ms << "." << endl;  
   return 0;
}

  
