
#include <iostream>
using namespace std;

int main()
{
  int num;
  int count;
  const int SIZE = 5;
    int ar[5];
    int i;

    for(i=0; i < SIZE; i++)
      {
      cout << "Enter a number: ";
     cin >> ar[i];
  cout << endl;
      }
  int highest = ar[0];
     for(count = 1; count < SIZE; count++)
     {
       if(ar[count] > highest)
	 highest = ar[count];
     }
 cout << highest << endl;
 for(i = 0; i < SIZE; i++)
   ar[i] = ar[i]*2;
 cout << endl;
 cout << "the new numbers in the array are";
 for(i=0; i < SIZE; i++)
   {
     cout << " " << ar[i];
   }
 cout << endl;
 return 0;
}
