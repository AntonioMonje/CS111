/*Purpose:  This program fills a array from a text file. It gets the sum of all the numbers of the array, and the average of all the numbers.
Implemented by: Antonio Monje
Date: 11/12/2015
User Information: The inputs are the text file that fill the array.
FUNCTIONS: this program contains the main function, readNum function, getLowest function, getHighest function, getSum, getAVG)
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int SIZE_NUM = 100;

int readNum(int ar[], int i);
int getLowest(int ar[], int i);
int getHighest(int ar[], int i);
int getSum(int ar[], int i);
void getAVG(int ar[], double& avg, int sum, int i);

int main()
{
  double avg; 
  double total = 0;
  int Highest;
  int Lowest; 
  int sum;
  int count; 
  int i;
  int num;
  int ar[SIZE_NUM];
  ifstream inFile;

  int readNum(int[], int);
  int getLowest(int[], int);
  int getHighest(int[], int);
  int getSum(int[], int);
  void getAVG(int[], double&, int, int);
 
 

  i = readNum(ar, SIZE_NUM);  
  cout << endl;
  cout << "The lowest is:";
  Lowest = getLowest(ar, i);
  cout << "The Highest is:";
  Highest = getHighest(ar, i);
  cout << "The sum is:";
  sum = getSum(ar, i);
  cout << "The average is:";
  getAVG(ar, avg, sum, i);
   return 0;
}

int readNum(int ar[], int SIZE_NUM)
{
  int i = 0;
  int num;
  ifstream inFile;

  inFile.open("numbers.txt");

      inFile >> num;
      while(inFile)
	{
	  ar[i++] = num;
	  cout << num << endl;
          inFile >> num;
	}
      
     inFile.close();
    
  return i;
}

int getLowest(int ar[], int i)
{
  int Lowest; 
  int count;
  Lowest = ar[0];
  for(count = 1; count < i; count++)
    {    
  if(ar[count] < Lowest)
	Lowest = ar[count];
    }
  cout << Lowest << endl;
  return Lowest;
}

int getHighest(int ar[], int i)
{
  int Highest;
  int count;
  Highest = ar[0];
  for(count = 1; count < i; count++)
    {
      if(ar[count] > Highest)
        Highest = ar[count];
    }
  cout << Highest << endl;
  return Highest;
}

int getSum(int ar[], int i)
{
  int sum = 0;    
 for(int count = 0; count < i; count++)
    {
      sum += ar[count];    
    }
 cout << sum << endl;
 return sum;
}

void getAVG(int ar[], double& avg, int sum, int i)
{  
      avg = (double)sum / i;
      cout << fixed << setprecision(2) << avg << endl;
}
