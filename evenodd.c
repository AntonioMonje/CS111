//this program shows even and odd numbers and their averages.
#include <iostream>
using namespace std;

int main()
{

  int num = 0;
  int even = 0;
  int odd = 0;
  int totalnum1 = 0;
  int totalnum2 = 0;
  double avg;
  cout << "Enter a number." << endl;
  cin >> num;
  while (num != 0)
    {
     
      if(num % 2 == 0)
	{  
	  even++;
	  totalnum1 += num;
          cout << "Even!" << endl;
	  cin >> num;

	}
      else
	  {
        odd++;
        totalnum2 += num;
	cout << "Odd!" << endl;
	cin >> num;
	  }
    }
  if ((even <= 0) && (odd <= 0))
    {
      cout << "You didn't enter a number" << endl;
    }    
  else
    {
      avg = (double)(totalnum1 +totalnum2) / (even + odd);
  cout << even << " even numbers!" << endl;
  cout << odd << " odd numbers!" << endl;
  cout << " the average is " << avg << endl;
    }     
     
  return 0;
}
