/*Purpose:  This program fills a 2D array from a text file. It gets the sum of all the numbers of the array, and the average of all the numbers. It lets you chose the row and column you want to add the sum.
Implemented by: Antonio Monje
Date: 11/12/2015
User Information: The inputs are the row and column that the user wants to be added. Also the text file that fill the array.
FUNCTIONS: this program contains the main function, fillArray function, getTotal function, getRTotal function, getCTotal function, getRowLowest function, getRowHighest function, getAverage function,
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int SIZE_ROW = 12;
const int SIZE_COLS = 4;

int fillArray(int numbers[][SIZE_COLS]);
int getTotal(int numbers[][SIZE_COLS]);
int getRTotal(int numbers[][SIZE_COLS], int SIZE_ROW);
int getCTotal(int numbers[][SIZE_COLS], int SIZE_ROW);
int getRowLowest(int numbers[][SIZE_COLS], int SIZE_ROW);
int getRowHighest(int numbers[][SIZE_COLS], int SIZE_ROW);
double getAverage(int numbers[][SIZE_COLS], int total, int SIZE_ROW);

int main()
{
  int total;
  int rtotal;
  int ctotal;
  int lowest;
  int Highest;
  double avg;
  int num;
  int r;
  int c;
  ifstream inFile;
  int numbers[SIZE_ROW][SIZE_COLS];  
  inFile.open("2Dnumbers.txt"); 
  inFile >> num;
  

  
  while(inFile)
    {
      for(int row = 0; row < SIZE_ROW; row++)   	
	{
	  for(int cols = 0; cols < SIZE_COLS; cols++)
	    {
	      numbers[row][cols] = num;
	      cout << num << " ";	
	      inFile >> num;	      
	    }
	  cout << endl;
	}      
    }
  
  inFile.close();
  cout << "The total is: ";
  total = getTotal(numbers);
  rtotal = getRTotal(numbers, SIZE_ROW); 
  ctotal = getCTotal(numbers, SIZE_ROW);
  lowest = getRowLowest(numbers, SIZE_ROW); 
  Highest = getRowHighest(numbers, SIZE_ROW); 
  avg = getAverage(numbers, total, SIZE_ROW);
 
  
 return 0;
}

int getTotal(int numbers[][SIZE_COLS])
{  int total;
  total = 0;
  for(int row = 0; row < SIZE_ROW; row++)
    {
      for(int cols = 0; cols < SIZE_COLS; cols++)	
	total += numbers[row][cols];	 
    }
  cout << total << endl;
  return total;             
  
}
int getRTotal(int numbers[][SIZE_COLS], int SIZE_ROW)
{
  int rtotal = 0;
  int r;
  cout << "Enter the row index you want ";
  cin >> r;
  
  for(int row = 0; row < SIZE_COLS; row++)
    {
      rtotal += numbers[r][row];
    }
  cout << "The row total for row " << r << " is: " << rtotal << endl; 
  return rtotal;
}
int getCTotal( int numbers[][SIZE_COLS], int SIZE_ROW)
{
  int ctotal = 0;
  int c;
  cout << "Enter the column index you want ";
  cin >> c;
  for(int cols = 0; cols < SIZE_ROW; cols++)
    {
      ctotal += numbers[cols][c];
    }
  cout << "The column total for column " << c << " is: " << ctotal << endl; 
  return ctotal;
}
int getRowLowest(int numbers[][SIZE_COLS], int SIZE_ROW)
{
  int lowest;
  int r;
  cout << "Enter a row index ";
  cin >> r; 
  lowest = numbers[r][0];
  for(int i = 1; i < SIZE_COLS; i++)
    {
      if(numbers[r][i] < lowest)
      lowest = numbers[r][i];
    }
  cout << "The lowest in the row index is: " << lowest << endl;
  return lowest;
}
int getRowHighest(int numbers[][SIZE_COLS], int SIZE_ROW)
{
  int Highest;
  int r;
  cout << "enter a row index ";
  cin >> r;
  Highest = numbers[r][0];
  for(int i = 1; i < SIZE_COLS; i++)
    {
      if(numbers[r][i] > Highest)
	Highest = numbers[r][i];
    }
  cout << "The highest in the row index is: " << Highest << endl;
  return Highest;
}


double getAverage(int numbers[][SIZE_COLS], int total, int SIZE_ROW)
{
  double avg;
  avg = (double)total/(SIZE_ROW*SIZE_COLS);
  cout << fixed << setprecision(2) << "The average is: " << avg << endl;
  return avg;
}
