// This program asks for a month and tells you the season
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int month;

  cout << "Enter the month 1-12" << endl;
  cin >> month;
 
  switch(month)
    {
    case 1: 
    case 2: 
    case 12: cout << " Its Winter! " << endl;
      break;
    case 3: 
    case 4: 
    case 5: cout << " Its Spring! " << endl;
      break;
    case 6: 
    case 7: 
    case 8: cout << " Its Summer! " << endl;
      break;
    case 9: 
    case 10: 
    case 11: cout << " Its Fall! " << endl;
      break;

    default: cout << "Bad month!" << endl;
    }
  return 0;
}

    
